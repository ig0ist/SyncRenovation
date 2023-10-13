<?php
include_once __DIR__.'/DGBase.php';
include_once __DIR__.'/WorkIFSFiles.php';


$opt = getopt('db',['dir::','buildfile::']);

/**
 * Use:
 * --dir=$PWD/fs/
 * --buildfile=$PWD/buildfile.bld
 *
 * Commands:
 *
 *
 */

$n=new \rifs\WorkIFSFile(
    $opt['dir']??'',
    $opt['buildfile']??'',

);
$n->compareDir('/Users/igor/sites/SyncReformatDev/');