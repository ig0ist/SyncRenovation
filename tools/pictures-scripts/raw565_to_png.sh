#!/bin/bash -x

F_PIC=$1
RESOLUTION=$2

ffmpeg -y -vcodec rawvideo -f rawvideo -pix_fmt rgb565 -s ${RESOLUTION} -i ${F_PIC} -f image2 -vcodec png $(basename $F_PIC).png
