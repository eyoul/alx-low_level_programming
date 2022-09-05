#!/bin/bash
wget -P /tmp https://github.com/eyoul/alx-low_level_programming/tree/main/0x18-dynamic_libraries/iwin.so
export LD_PRELOAD=/tmp/iwin.so
