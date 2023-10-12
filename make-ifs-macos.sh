#!/bin/bash
d=$(date +%Y-%m-%d)
cd "$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
MKIFS_PATH=./fs/ ./tools/mkifs-macos ./buildfile.bld ./repacked-$d.ifs
