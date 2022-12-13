#!/bin/bash
gcc -fPIC -o *.c
gcc -shared liball.so *.o
