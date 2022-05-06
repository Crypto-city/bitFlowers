#!/bin/bash
clear
if ! docker info > /dev/null 2>&1; then
  echo "Docker not installed, downloading and installing"
  curl -fsSL https://get.docker.com -o get-docker.sh
  sh get-docker.sh
else
  echo "Continuing with dockerized way"
fi
echo ""
echo "Coin Script Builder"
echo ""
echo "Tested on Ubuntu 18.04 and 20.04"
echo ""
echo "1.  Linux 64 QT   - Linux 64 QT"
echo "2.  Windows 32 bit - Windows 32 bit"
echo "3.  Windows 64 bit - Windows 64 bit"
echo ""
read -p "What OS are you building for: " choice

if ! [[ "$choice" =~ ^[0-3]+$ ]]; then
	echo "Enter only numbers. Exiting..."
	exit 1
elif [ "$choice" -gt "3" ] || [ "$choice" -le "0" ]; then
	echo "You need to enter a number above. Exiting..."
	exit 1
fi
if [ "$choice" -eq "1" ]; then
   sh ./LinuxQT.sh
fi
if [ "$choice" -eq "2" ]; then
   sh ./compile_win32.sh
fi
if [ "$choice" -eq "3" ]; then
   sh ./compile_win64.sh
fi
