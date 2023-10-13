#!/bin/bash
d=$(date +%Y-%m-%d-%H%M)
cd "$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
MKIFS_PATH=./fs/ ./tools/mkifs-macos -t ifs ./buildfile.bld ./repacked-$d.ifs
