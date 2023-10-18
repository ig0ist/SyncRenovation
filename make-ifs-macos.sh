#!/bin/bash
d=./repacked-$(date +%Y-%m-%d-%H%M).ifs

echo "FILE: $d"

cd "$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
MKIFS_PATH=./fs/ ./tools/mkifs-macos -t ifs ./buildfile.bld $d


#./tools/dumpifs-macos -vv $d

echo "Make info"
./tools/dumpifs-macos -vvm ./repacked-2023-10-14-1454.ifs > ./docs/lastBuild/info_dumpifs.txt
find ./fs/* -type f -exec md5  "{}" + > ./docs/lastBuild/md5files.txt

echo "Upload"
scp $d ubuntu@192.168.1.77:/home/ubuntu/ifs

echo "DONE!"
