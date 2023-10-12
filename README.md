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

- [ ] Write tool update `buildfile.bld`
- [ ] Support USB-Lan
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