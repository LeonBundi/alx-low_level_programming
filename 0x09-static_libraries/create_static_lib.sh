#!/bin/bash
gcc -Wall -Werror -Wextra -Wpedantic -c *.c
ar -rc liball.a *.o
ranlib liball.a

