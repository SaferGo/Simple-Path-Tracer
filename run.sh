#!/bin/bash

mkdir output
mkdir build
cd build
cmake ..
make
./../bin/SimpleRayTracer
