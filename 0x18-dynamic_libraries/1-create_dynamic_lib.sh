#!/bin/bash

# Create a list of all the .c files in the current directory
c_files=$(find . -name "*.c")

# Compile each .c file into an object file
for c_file in $c_files; do
  gcc -c -fPIC -o $c_file.o $c_file
done

# Create the dynamic library
gcc -shared -o liball.so $c_files.o
