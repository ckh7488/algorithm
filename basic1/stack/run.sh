#!/bin/sh
echo "test start"
g++ -o a.out stack.cpp && ./a.out < input > output
echo "test end"
rm -rf ./a.out