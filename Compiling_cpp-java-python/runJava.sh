#!/bin/bash

fileName=$1

# Color Codes
BLUE='\033[1;34m'
YELLOW='\033[1;33m'

# Compiling
javac $fileName.java && echo "${YELLOW}Compiling..."
echo "Done!"

# Executing
echo "${BLUE}"
java $fileName.java

# Clearing the executable file
rm $fileName.class