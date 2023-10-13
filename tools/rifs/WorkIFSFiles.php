<?php
namespace rifs;


class WorkIFSFile extends DGBase
{
    const signature = 0x00ff7eeb;

    private string $buildfile='';
    private string $fsDir='';
    public function __construct(string $fsDirectory = '',$buildfile ='')
    {
        if (!$fsDirectory) {
            $fsDirectory=__DIR__.'/../../fs';
        }
        if (!is_dir($fsDirectory)) {
            $this->error("Can`t find `/fs` directory");
        }
        $this->fsDir=$fsDirectory;
        if (!$buildfile) {
            $buildfile = $fsDirectory . '/../buildfile.bld';
        }
        if (!is_file($buildfile)) {
            $this->error("Can`t find ".$buildfile);
        }
        $this->buildfile = $buildfile;
    }

    public function scanDir($path,$regexp=null):array
    {
        return [];
    }

    public function display_script()
    {

    }
    public function dumpScriptFile():void
    {
        //todo read in bld find +script
        $script = $this->fsDir.'/proc/boot/.script_i3';
        $this->lineMsg(1);
        if (!is_file($script)) $this->error("Not find :".$script);




    }
}