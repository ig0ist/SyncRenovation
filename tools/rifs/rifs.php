<?php
include_once __DIR__.'/DGBase.php';
include_once __DIR__.'/WorkIFSFiles.php';


/**
 * Use:
 * --dir=$PWD/fs/
 * --buildfile=$PWD/buildfile.bld
 *
 * Commands:
 *
 *
 */
// --------------- WORK CONSOLE ---------------------------------------------
$settings=[];
foreach ($argv as $item)
{
    if (substr($item,0,2)==='--'){
        if (strpos($item,'=')) {
            $kk=explode('=',$item);
            $settings[strtolower(ltrim($kk[0],'--'))]=$kk[1];
        } else {
            $settings[strtolower(ltrim($item,'--'))]=true;
        }
    }
}

$run=false;
$n=new \rifs\WorkIFSFile(
    $settings['dir']??'',
        $settings['buildfile']??'',

);
if (isset($settings['compare'])) {
    if (is_dir($settings['compare'])) {
        $n->compareDir($settings['compare']);
        $run=true;
    } else {
        echo "use --compare=../dir/\n";
    }
}
if (isset($settings['new'])) {
    $n->findNew();
    $run=true;
}

if (!$run) {
echo <<<F
Use [--compare|--new]

If compare dir: --compare=../dirToNewFS/


If find new files --new

F;

}