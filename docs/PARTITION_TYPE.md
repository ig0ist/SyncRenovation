# `PARTITION_TYPE` -- downgrading to pre-3.3.19052 firmware

> **Live-tested, working.** `PARTITION_TYPE=A` + the `update_part` fix
> (`docs/UPDATE_PART_SIZE_GATE.md`) were used together on real hardware to
> downgrade a unit to 3.0.23219. Confirmed via `fdisk /dev/hd0 show`
> post-install: exact match to the known-native 3.0.23219 partition
> boundaries (`hd0t177`/`hd0t178` both 1024MB/1024 cylinders), not just an
> About-screen version-string check.

## The problem

`partition` (the tool `update_radio.sh` calls to lay out the eMMC) has always
produced what we're calling **Type B**: 1.5GiB `apps`/`rwdata` partitions.
That matches every 3.3.19052+ build (`apps.img` is exactly
`1,610,612,736` bytes there), but older, pre-3.3.19052 builds -- including
3.0.23219 -- ship a smaller **Type A** layout: a 1GiB `apps.img`
(`1,073,741,824` bytes). Installing one of those onto the always-Type-B
layout works, but leaves the partition table permanently mismatched from
what that firmware generation actually expects.

(Note: "Type A"/"Type B" are this fork's own naming for the two layouts --
`partition`'s own compiled-in strings just refer to a `MY_Variant` flag, no
A/B lettering baked into the binary itself.)

## The fix

`partition_native` is a byte-for-byte copy of `partition` with two bytes
changed, so it produces Type A instead:

- File offset `21560`: the compiled-in layout-selector flag flipped `1`->`0`.
- File offset `8732`: the only instruction that could ever set that flag back
  to `1` replaced with a NOP, so the fix holds regardless of the unit's own
  `MY_Version`.

Nothing else differs -- confirmed via `cmp -l` (exactly those 2 byte ranges)
and a full decompile of both. `partition` itself is untouched.

## Using it

Add one line to your `reformat.lst`:

```
PARTITION_TYPE=A
```

**Leave it out (or set anything other than `A`) and you get Type B** -- the
same layout this tool has always produced, so existing users/scripts see no
change. Only set `A` if you're specifically downgrading to a pre-3.3.19052
build; for anything 3.3.19052 or newer, don't set it (or set `B` explicitly
if you'd rather be explicit about it -- both behave identically).

## Why this isn't automatic

`update_radio.sh` calls `partition` *before* `install_apps` extracts and
verifies the incoming APPS package (`partition` runs at the top of the
reformat flow; `install_apps` runs near the end) -- so there's no real
`apps.img` on disk yet at the point the partition-layout decision has to be
made, and the raw, still-compressed package sizes on the USB stick don't
reliably predict which layout a given package needs. Auto-detecting this
would mean either reordering the existing install flow (a much bigger, more
invasive change) or partially unpacking each package's signed manifest just
to read a version number before the real install starts. Both are real
options worth exploring later, but an explicit, opt-in field -- Type B as
the unchanged default -- is the safe starting point.

## Related: `update_part`'s size gate

If you're downgrading to a Type A (pre-3.3.19052) build, you'll also hit a
second, independent issue in `update_part` (the tool that actually writes
the extracted APPS content onto `/dev/hd0t177`): it hard-rejects with
"Image size is less than partition size" whenever the incoming image is
smaller than the partition it's being written to -- which a genuine,
correctly-Type-A-partitioned 1GiB `apps.img` always is relative to the
tool's own internal size expectations. See `docs/UPDATE_PART_SIZE_GATE.md`
for that fix; both are needed together for a real pre-3.3.19052 downgrade to
complete.
