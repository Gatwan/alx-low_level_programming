#!/bin/bash
gcc -Wall -predantic -Werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
