#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar rs liball.a *.o
