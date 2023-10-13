#!/bin/bash
d=./repacked-$(date +%Y-%m-%d-%H%M).ifs

echo "FILE: $d"

cd "$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
MKIFS_PATH=./fs/ ./tools/mkifs-macos -t ifs ./buildfile.bld $d


./tools/dumpifs-macos -vv $d