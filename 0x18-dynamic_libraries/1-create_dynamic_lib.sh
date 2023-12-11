#!/bin/bash
gcc -c 0-isupper.c 1-memcpy.c 0-main.c 0-memset.c 0-strcat.c 100-atoi.c 1-isdigit.c 1-memcpy.c 3-islower.c 3-puts.c 3-strcmp.c 3-strspn.c  -fpic && gcc *.o -shared -o liball.so
