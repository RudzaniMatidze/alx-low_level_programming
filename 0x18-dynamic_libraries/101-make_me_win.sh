#!/bin/bash
wget -p .. https://raw.githubusercontent.com/RudzaniMatidze/alx-low_level_programming/master/0x18-dynamic_libraries/libhacker.so
export LD_PRELOAD="$PWD/../libhacker.so"
