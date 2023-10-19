#!/bin/bash

find ../../fs/images/ -name "ford*" -exec ./raw565_to_png.sh {} 800x480 \;
find ../../fs/images/ -name "ford*_SDM10*" -exec ./raw565_to_png.sh {} 1200x800 \;
find ../../fs/images/ -name "ford*_SDM4*" -exec ./raw565_to_png.sh {} 480x272 \;
