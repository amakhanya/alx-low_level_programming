#!/bin/bash
gcc -Wall -wextra -Werror -pedantic -C *.C
liball.a *.o
