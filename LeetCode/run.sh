#!/bin/bash

fileName=$1

# Color Codes
RED='\033[1;31m'

# Adding these lines to add to the cpp file
sed -i '2i#define LOCAL_DEBUG_IN' $fileName.cpp
sed -i '3i#define LOCAL_DEBUG_OUT' $fileName.cpp

# Compiling
g++ -std=c++17 $fileName.cpp -o $fileName.out

echo -e "${RED}"

time ./$fileName.out

# Clearing the executable file
rm $fileName.out

# Deleting the lines
sed -i '2,3d' $fileName.cpp