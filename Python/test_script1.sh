#!/bin/bash

# Check if exactly two arguments are provided
if [ "$#" -ne 2 ]; then
    echo "Usage: $0 <num1> <num2>"
    exit 1
fi

# Extract the two numbers from command line arguments
num1=$1
num2=$2

# Perform the addition
sum=$((num1+ num2))

# Print the result
echo "Sum of $num1 and $num2 is: $sum"