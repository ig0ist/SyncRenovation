# `update_part`'s "Image size is less than partition size" gate

> **Live-tested, working.** Used together with `PARTITION_TYPE=A` to
> downgrade a real unit to 3.0.23219 -- without this fix, the correctly
> Type-A-partitioned 1GiB `apps.img` would have hit this exact reject.
> Install completed cleanly with no errors.

## The problem

`update_part` (called as `update_part /dev/hd0t177 .../apps.tar.gz` from
`install_apps` in `update_radio.sh`) does two independent size checks before
writing the image to the partition:

- **image bigger than partition -> reject.** Correct, real overflow-safety
  check -- writing more data than the partition can hold would corrupt
  whatever comes after it. Left fully intact.
- **image smaller than partition -> also reject.** Not actually unsafe -- a
  smaller raw image written to a larger partition just leaves harmless,
  unused trailing space, the same as any partially-filled disk. But as
  shipped, `update_part` treats this exactly like the dangerous case and
  hard-fails with "Image size is less than partition size".

That second check is what blocks a genuine, correctly-built Type A
(pre-3.3.19052, 1GiB) `apps.img` from ever installing, even with the eMMC
correctly laid out via `partition_native`/`PARTITION_TYPE=A` -- the image is
*smaller* than this tool's own compiled expectations, which is exactly the
case this gate rejects.

## Verified not just theoretical

Confirmed against `partition_SDINBDG4-64G`'s own real, live-used precedent
already in this repo (a *bigger*-partition class, not a smaller-image one,
but the same principle) -- unused trailing space on a raw-sector-copied
QNX6 partition is normal, expected, and something this codebase's own tools
already produce elsewhere without issue.

## The fix

Single 4-byte instruction change at file offset `0x1ad8`:

- Before: `03 00 55 e1` -- `cmp r5,r3` (the "less than" comparison this
  reject depends on).
- After: `09 00 00 ea` -- an unconditional branch straight to the success
  path at `0x101b04`, computed from the same B-instruction encoding already
  used elsewhere in this exact binary (verified against `0x101a4c`'s own
  real `b 0x101ec4`).

Nothing else differs -- `cmp -l` against the original confirms exactly those
4 bytes, file size unchanged (`14640` bytes both before and after). The
"image bigger than partition" check (a separate, earlier comparison block)
is untouched, so genuine overflow protection still applies.

This directly modifies `update_part` in place (not a new `_native`-style
side-by-side file like `partition`/`partition_native`) because, unlike the
partition-layout choice, there's no scenario where the "less than" reject is
actually the behavior you want -- it only ever blocks a safe, valid install.
