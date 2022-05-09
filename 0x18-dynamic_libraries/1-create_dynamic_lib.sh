#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -std=c99 -shared -fPIC *.c -o liball.so
