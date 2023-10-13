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
    public function display_script()
    {

    }

    public function scanDir(string $dir,string $regExp='/.*/i'):array
    {
        $a = new \RecursiveRegexIterator( new \RecursiveDirectoryIterator( $dir ), $regExp, \RecursiveRegexIterator::ALL_MATCHES );
        $out=array();
        foreach( new \RecursiveIteratorIterator( $a ) as $s )
        {
            $ff=@$s[0][0];
            if (is_file($ff) && filesize($ff)>2 && is_readable($ff))
            {
                $name=str_ireplace($dir,'',$ff);
                $name=preg_replace('/\_i\d{1,}/ius','',$name);
                $out[$name]=$ff;
            }
        }
        asort($out);
        return $out;
    }
    public function compareDir(string $dir):void
    {
        //todo read in bld find +script
        $this->lineMsg(1);
        //        if (!is_file($script)) $this->error("Not find :".$script);
        //
        $listDest = $this->scanDir($dir);
        $fsDest = $this->scanDir($this->fsDir);

        $r=array_diff(array_keys($listDest),array_keys($fsDest));

        print_r($r);



    }
}