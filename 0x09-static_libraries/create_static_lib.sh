#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -Wall -Wextra -Werror -pedantic -c *.c

# Create the static library liball.a from the object files
ar rcs liball.a *.o

# Clean up by removing the object files
rm *.o
