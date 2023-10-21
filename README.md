# SyncRenovation 

Rebuild Reformat-IFS for Sync 3 

[Sync3story: How we fixed a reformat](https://gist.github.com/bigunclemax/db509488879668ffb6fb7c02761a09c7)





![SyncRenovation 6.4](/docs/images/V6_4_3.png)







Used tool`s 

* [MkIfs by Bigunclemax](https://github.com/bigunclemax/mkxfs)
* [sync3flash by Bigunclemax](https://github.com/bigunclemax/sync3flash)



> [!WARNING]
> Use at your own risk, you may kill and brick your device.


> [!NOTE]
> Use only ready-made IFS build files.


  
Make IFS
-----

```shell

MKIFS_PATH=./fs/ ./tools/mkifs-macos ./buildfile.bld ./repacked-01.ifs

```


Build 
------


```shell

# In MacOS (intel)

./make-ifs-macos.sh 


```



ToDo
-----

- [X] Editor / convert `/proc/boot/.script` - move to Txt  
- [X] Write tool update `buildfile.bld` - use manual, not need automation 
- [X] Support USB-Lan
- [ ] SSH Server 
- [x] Support MY20 new Display 
- [x] Support new EMMC
- [ ] `jq` tool for read&work JSON files in sh
- [ ] More and more docs

**Add support custom** `.sh`:
- [ ] Read `/fs/usb0/path.json` 
- [ ] install before finish boot
- [ ] install before run `update_radio.sh`
- [ ] install after all install in `update_radio.sh`


## LanUSB

Default IP: `192.168.1.26`

* Support: Chip ASIX AX88772C, support by  QNX
* Vendor : 0x0b95 (ASIX Elec. Corp.)
* Product : 0x772b (AX88772C)

### Telnet Password

Login `root`  
```
#Pasa3Fo
```


# Changelog


### 2023-10-21 V6.4.3

* Successful support new display

### 2023-10-19 V6.1

* Make release `SyncRenovation By I.M.A. V6.1`
* Add log to `/fs/usb0/syncrenovation.log` from variable `$LOG_USB_FILE`
* Fix path_pre_install.sh & post install no wait file
* Back param u in `dispmon -u`, for support display

### 2023-10-19 V6 

* Make release `SyncRenovation By I.M.A. V.6`
* Support MY20 new Display: fix dispmon &  switch disp_rsrmgr and dispmon to new versions & add files graphics_l.conf,graphics_p.conf and SO libs
* Support new EMMC: `partition_SDINBDG4-64G`
* images: update
* switch `update_radio.sh` 
* update_radio.sh: add custom payload hooks
* update_radio.sh: add USB_INSTALLER installation
* Add `bzip2`
* Add `chsum`
* Add `diff`
* Add `strings`
* Add `tail`
* Add `zip unzip`

### 2023-10-13 

* Init release with QNX-REFORMAT-DEV
* Support telnet & qconn
* Support USB-LAN 

