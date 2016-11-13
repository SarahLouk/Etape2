#!/bin/bash

rm -rf bin
mkdir bin
g++ -std=c++11 -o bin/terrain src/terrain.cpp -lpthread
