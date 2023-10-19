#!/bin/bash -x

F_PIC=$1

ffmpeg -y -vcodec png -i ${F_PIC} -vcodec rawvideo -f rawvideo -pix_fmt rgb565 ${F_PIC%.*}