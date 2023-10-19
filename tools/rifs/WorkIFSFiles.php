<?php
namespace rifs;


class WorkIFSFile extends DGBase
{
    const signature = 0x00ff7eeb;

    private string $buildfile='';
    private string $fsDir='';
    private array $bldFiles=[];
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
            if (is_file($ff) && is_readable($ff))
            {
                $name=str_ireplace($dir,'',$ff);
                $name=preg_replace('/\_i\d{1,}/ius','',$name);
                $out[$name]=$ff;
            }
        }
        asort($out);
        return $out;
    }

    private function readBuildFile()
    {
        $this->bldFiles=[];
        $_pattern='/[type=(?P<type>file|link)\sgid=(?P<gid>\d)\suid=(?P<uid>\d)\s+perms=(?P<perms>\d{1,})\s+mtime=(?P<mtime>\d+).*flags=(?<flags>\d+).*\]\s*(?<path_f>.*)\=(?<path_t>.*)/ius';
        $f=explode("\n",file_get_contents($this->buildfile));
        foreach ($f as $line) {
            $ll=trim($line);
            if (stripos($ll,'[type=')===0) {
                //
                // [type=file gid=0 uid=0 perms=0777 mtime=1503554374 +raw flags=80 phys_align=4K] usr/lib/libGLESv2.so=usr/lib/libGLESv2.so
                $math=[];
                if (preg_match('/\[type=(?P<type>file|link)\sgid=(?P<gid>\d)\suid=(?P<uid>\d)\s+perms=(?P<perms>\d{1,})\s+mtime=(?P<mtime>\d+).*flags=(?<flags>\d+).*\]\s*(?<path_f>.*)\=(?<path_t>..*)/ius', $ll,$math))
                {
//                    echo json_encode($math)."\n\n\n";
                    if ($math['type']==='file') {
                        $this->bldFiles[$math['path_t']]=$math;
                    } else {
                        // todo?
                        // check links & dirs?
                    }

                }
            }
        }
    }

    public function findNew():void
    {
        $this->lineMsg(1);
        $fsDest = $this->scanDir($this->fsDir);
        $this->readBuildFile();
        $skip = ['imagefs','bootstrap','binary.boot','startup'];
        foreach (array_keys($this->bldFiles) as $fileInBuild){
            if (empty($fsDest[$fileInBuild])) {
                $this->msg("Not find file : ".$fileInBuild,4);

            }
        }
        foreach (array_keys($fsDest) as $fileInFS){
            if (in_array($fileInFS,$skip)) continue;
            if (empty($this->bldFiles[$fileInFS])) {
                $this->msg("Not use  file : ".$fileInFS,3);
            }
        }
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

    public function x509()
    {
        //
    }
}