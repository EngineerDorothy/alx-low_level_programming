#!/bin/bash
gcc -wall -pedantic -warror -wextra -c *.c
ar rc liball.a *.o
