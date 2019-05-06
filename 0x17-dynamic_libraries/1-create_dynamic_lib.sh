#!/bin/bash
gcc -c -fPIC -Wall -pedantic -Werror -Wextra *.c
gcc -shared -fPIC -o liball.so *.o

