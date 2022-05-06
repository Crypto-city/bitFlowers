#!/bin/bash
#This script will build a docker image with all dependencies and then compile the .exe file into the root folder
sudo docker build -t bitflowers-qt-mingw64 --file windows64.docker .
sudo docker run  --mount type=bind,source=$(pwd)/../,target=/app/res --mount type=bind,source=$(pwd)/../,target=/app/src bitflowers-qt-mingw64
