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

    private $cobs_in = [
    0xFF, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
    0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
    0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17,
    0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F,
    0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27,
    0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F,
    0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37,
    0x38, 0x39, 0x3A, 0x3B, 0x3C, 0x3D, 0x3E, 0x3F,
    0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47,
    0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F,
    0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57,
    0x58, 0x59, 0x5A, 0x5B, 0x5C, 0x5D, 0x5E, 0x5F,
    0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67,
    0x68, 0x69, 0x6A, 0x6B, 0x6C, 0x6D, 0x6E, 0x6F,
    0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77,
    0x78, 0x79, 0x7A, 0x7B, 0x7C, 0x7D, 0x7E, 0x7F,
    0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87,
    0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F,
    0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97,
    0x98, 0x99, 0x9A, 0x9B, 0x9C, 0x9D, 0x9E, 0x9F,
    0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7,
    0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF,
    0xB0, 0xB1, 0xB2, 0xB3, 0xB4, 0xB5, 0xB6, 0xB7,
    0xB8, 0xB9, 0xBA, 0xBB, 0xBC, 0xBD, 0xBE, 0xBF,
    0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7,
    0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF,
    0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0xD5, 0xD6, 0xD7,
    0xD8, 0xD9, 0xDA, 0xDB, 0xDC, 0xDD, 0xDE, 0xDF,
    0xE0, 0xE1, 0xE2, 0xE3, 0xE4, 0xE5, 0xE6, 0xE7,
    0xE8, 0xE9, 0xEA, 0xEB, 0xEC, 0xED, 0xEE, 0xEF,
    0xF0, 0xF1, 0xF2, 0xF3, 0xF4, 0xF5, 0xF6, 0xF7,
    0xF8, 0xF9, 0xFA, 0xFB, 0xFC, 0xFD, 0xFE,
    0x02, 0xFF,
    ];
    private $cobs_out_correct = [
        0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
        0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
        0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17,
        0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F,
        0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27,
        0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F,
        0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37,
        0x38, 0x39, 0x3A, 0x3B, 0x3C, 0x3D, 0x3E, 0x3F,
        0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47,
        0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F,
        0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57,
        0x58, 0x59, 0x5A, 0x5B, 0x5C, 0x5D, 0x5E, 0x5F,
        0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67,
        0x68, 0x69, 0x6A, 0x6B, 0x6C, 0x6D, 0x6E, 0x6F,
        0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77,
        0x78, 0x79, 0x7A, 0x7B, 0x7C, 0x7D, 0x7E, 0x7F,
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87,
        0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F,
        0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97,
        0x98, 0x99, 0x9A, 0x9B, 0x9C, 0x9D, 0x9E, 0x9F,
        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7,
        0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF,
        0xB0, 0xB1, 0xB2, 0xB3, 0xB4, 0xB5, 0xB6, 0xB7,
        0xB8, 0xB9, 0xBA, 0xBB, 0xBC, 0xBD, 0xBE, 0xBF,
        0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7,
        0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF,
        0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0xD5, 0xD6, 0xD7,
        0xD8, 0xD9, 0xDA, 0xDB, 0xDC, 0xDD, 0xDE, 0xDF,
        0xE0, 0xE1, 0xE2, 0xE3, 0xE4, 0xE5, 0xE6, 0xE7,
        0xE8, 0xE9, 0xEA, 0xEB, 0xEC, 0xED, 0xEE, 0xEF,
        0xF0, 0xF1, 0xF2, 0xF3, 0xF4, 0xF5, 0xF6, 0xF7,
        0xF8, 0xF9, 0xFA, 0xFB, 0xFC, 0xFD, 0xFE, 0xFF
    ];
/*


02 01 e2 01 af e4 f3 12 3a 21 e0 03 11 02 00



02 01 e2 02 fc d4 e1 ff 00
   ^^
   01 01


0b 20 ce 0a e4 9c 78 c3 52 05 04 00 => 0B [11 chars] =>   20 ce 0a e4 9c 78 c3 52 05 04
07 20 ca 01 e2 cd 01 00             => 07            =>   20 ca 01 e2 cd 01




00 0b 20 c8 0a e1 9b 78 c3 52 fb 03 00 00 04 12 01 40 e1 53 00
00 03 72 01 e2 08 7b 00 00

07 86 01 80 10 17 01 00
07 8a 01 80 10 1b 01 00
00
03 9a 01 e2 02 9d 00 04 12 01 40 e1 53 00
00
03 72 01 e2 08 7b 00 00 07 86 01 80 10 17 01 00 07 8a
01 80 10 1b 01 00 00 03 9a 01 e2 02 9d 00 07 20
ca 01 e2 cd 01

00 00 07 20 ca 01 e2 cd 01 00
00
07 20 ca 01 e2 cd 01 00
00
07 20 ca 01 e2 cd 01 00
00


00
0b 20 ce 0a e4 9c 78 c3 52 05 04 00
00
04 12 01 40 e1 53 00
00
03 72 01 00 07 8a 01 80 10 1b 01 00
00
03 9a 01 e2 02 9d 00 04 12 01 40 e1 53 00
00
03 72 01 e2 00
07 8a 01 80 10 1b 01 00
00
03 9a 01 e2 02 9d 00
e4 20 d0 40 e5 d3 04 a0 b5 02 00
00
e4 20 d0 40 e5 d3 04 a0 b5 02 00
00
0b 20 d2 0a e6 9d 78 c3 52 0c 04 00
00
0b 20 d2 0a e6 9d 78 c3 52 0c 04 00
00
04 12 01 40 e1 53 00 00 03 72 01 e2 08 7b 00
00
07 86 01 80 10 17 01 00 07 8a 01 80 10 1b 01 00
00
03 9a 01 e2 02 9d 00 04 12 01 40 e1 53 00
00
03 72 01 e2 08 7b 00 00 07 86 01 80 10 17 01 00
07 8a 01 80 10 1b 01 00 00
03 9a 01 e2 02 9d 00 e4 20 d4 40 e7 d3 04 a0 bb 02 00
00
e4 20 d4 40 e7 d3 04 a0 bb 02 00
00
02 01 04 03 64 02 e1 6a 00
00
e4 20 d4 40 e7 00
02 01 04 03 65 02 e1 6b 00
00
02 01 e1 01 01 00 02 01 e2 01 01 e4 00
02 01 e2 01 02 e4 00 02 01 e2 01 03 e4 00
02 01 e2 01 04 e4 f3 12 3a 21 e0 03 66 01 00
00
02 01 e2 01 06 00
02 01 e2 01 07 00
02 01 e2 01 08 e4 f3 12 3a 21 e0 03 6a 01 00
00
02 01 e2 01 0a e4 00
02 01 e2 01 0b e4 00
02 01 e2 01 0c e4 f3 12 3a 21 e0 03 6e 01 00
00
02 01 e2 01 0e e4 f3 12 3a 21 e0 03 70 01 00
00
02 01 e2 01 10 00
02 01 e2 01 11 00
02 01 e2 01 12 e4 f3 12 3a 21 e0 03 74 01 00
00
02 01 e2 01 14 e4
00 02 01 e2 01 15 e4 00 02 01 e2 01 16 e4 00 02
01 e2 01 17 e4 00 02 01 e2 01 18 e4 f3 12 3a 21
e0 03 7a 01 00 00 02 01 e2 01 1a 00 02 01 e2 01
1b 00 02 01 e2 01 1c e4 f3 12 3a 21 e0 03 7e 01
00 00 02 01 e2 01 1e e4 00 02 01 e2 01 1f e4 00
02 01 e2 01 20 e4 f3 12 3a 21 e0 03 82 01 00 00
02 01 e2 01 22 e4 f3 12 3a 21 e0 03 84 01 00 00
02 01 e2 01 24 00 02 01 e2 01 25 00 02 01 e2 01
26 e4 f3 12 3a 21 e0 03 88 01 00 00 02 01 e2 01
28 e4 00 02 01 e2 01 29 e4 f3 12 3a 21 e0 03 8b
01 00 f3 12 3a 21 e0 03 8c 01 00 e4 f3 12 3a 21
e0 03 8d 01 00 00 02 01 e2 01 2d e4 f3 12 3a 21

https://github.com/coastalwhite/cobs-rs
https://github.com/Nik89/CanOverhead
https://github.com/justincpresley/go-cobs

 */

    public function cobs()
    {
        $m=[
            '02 01 e2 01 af e4 f3 12 3a 21 e0 03 11 02 00',
            '02 01 e2 01 f9 e4 f3 12 3a 21 e0 03 5b 02 00',
            '02 01 e2 02 fc d4 e1 ff 00',
            '02 01 04 01 0c 01 e4 f3 12 3a 21 e0 03 6f 01 00',
            '07 8a 01 80 10 1b 01 00',

        ];
        $out_bytes = [];
        $length = sizeof($this->cobs_in);
        $idx = 0;
        while(true)
        {

                $length = $this->cobs_in[$idx];
                $idx += 1;
                if ($length === 0x0) {
                    exit("zero byte found in input");
                }
                $end = $idx + $length - 1;
                // copy data
                $r=array_slice($this->cobs_in,$idx,$end);
                if (in_array(0x0,$r)) {
                    exit('zero byte found in input');
                }
                $out_bytes = array_merge($out_bytes,$r);
                $idx = $end;
                if ($idx > $length) {
                    echo('not enough input bytes for length code');
                    break;
                }
                if ($idx < $length) {
                    if ($length < 0xFF) {
                        $out_bytes = array_merge([0x00],$r);
                    } else {
                        break;
                    }
                }

        }
        print_r($out_bytes);
                // if length == 0





//        in_bytes_mv = _get_buffer_view(in_bytes)
//    out_bytes = bytearray()
//    idx = 0
//
//    if len(in_bytes_mv) > 0:
//        while True:
//            length = ord(in_bytes_mv[idx])
//            if length == 0:
//                raise DecodeError("zero byte found in input")
//            idx += 1
//            end = idx + length - 1
//            copy_mv = in_bytes_mv[idx:end]
//            if b'\x00' in copy_mv:
//                raise DecodeError("zero byte found in input")
//            out_bytes += copy_mv
//            idx = end
//            if idx > len(in_bytes_mv):
//                raise DecodeError("not enough input bytes for length code")
//            if idx < len(in_bytes_mv):
//                if length < 0xFF:
//                    out_bytes.append(0)
//            else:
//                break
//    return bytes(out_bytes)
    }
}