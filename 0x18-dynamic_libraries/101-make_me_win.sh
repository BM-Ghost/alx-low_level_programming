#!/bin/bash
wget -qP /tmp https://github.com/Emmo00/alx-low_level_programming/raw/main/0x18-dynamic_libraries/sure.so
export LD_PRELOAD=/tmp/sure.so
