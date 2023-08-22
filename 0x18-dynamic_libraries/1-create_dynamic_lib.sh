#!/bin/bash

/**
 * gcc - Create dynamic library c files
 */
gcc -Wall -Werror -Wextra -pedantic -shared -o liball.so -fPIC *.c
