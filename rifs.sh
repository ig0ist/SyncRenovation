#!/bin/bash
cd "$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
php ./tools/rifs/rifs.php --dir=$PWD/fs/ --buildfile=$PWD/buildfile.bld $*
