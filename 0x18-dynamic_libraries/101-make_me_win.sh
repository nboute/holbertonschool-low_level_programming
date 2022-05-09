#!/bin/bash
git clone https://github.com/nboute/crackme_lib.git /tmp/crackme_lib &> /dev/null
export LD_PRELOAD=/tmp/crackme_lib/preload.so
