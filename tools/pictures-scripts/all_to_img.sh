#!/bin/bash

find ./ -name "*.png" -exec ./png_to_raw565.sh {} \;
find ./ -name "*.img" -exec cp -v {} ../../fs/images/ \;
