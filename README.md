# Sync Renovation 

Rebuild Reformat-IFS for Sync 3 

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
- [ ] Support MY20 new Display 
- [ ] Support new EMMC
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


### 2023-10-13 

* Init release with QNX-REFORMAT-DEV
* Support telnet & qconn
* Support USB-LAN 


## Todo Files


* Unzip & zip in `/proc/boot/`
* `/usr/lib/graphics/..../graphics_p.conf`
* /proc/boot/bzip2
* /proc/boot/chsum
* /proc/boot/diff
* /proc/boot/display_image
* /proc/boot/sqlite3
* /proc/boot/strings
* /proc/boot/tail