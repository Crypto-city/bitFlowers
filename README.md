Hi Coinmarketcap

![Image of bitFlowers Logo](https://www.crypto-city.com/PF.Base/file/pic/photo/9705ff7b4c16236959148700333565c3.png)
-----------------
# *bitFlowers* (PETAL) 
# The eGift Cryptocurrency
-----------------
*Please be aware that iCryptony (anthonyrjwood) is no longer with Crypto-city.com. See offcial announcement here: https://www.crypto-city.com/blog/3796/crypto-city-com-update-6-13-2022/

For your safety, please only download from this repo or from the Crypto-city.com website.

Crypto-city Page / Website
https://www.crypto-city.com/bitflowers/wallet/


Discord: https://discord.gg/d4mNNRdm9J



Github: 
https://github.com/Crypto-city/bitFlowers

Explorer:
https://www.crypto-city.com/bitflowers/explorer/


Twitter
https://twitter.com/Cryptocitycom




-----------------
### **To build on Linux (Ubuntu 18.04)** 
-----------------

If you are unfamiliar with building a coin project from a github repo on a Linux virtual machine, this video below (click link) will guide you with this process. It is important to isolate a build environment on a virtual machine, so that the dependencies do not intefere with your primary OS. Once you have completed the guide, you can move on to the *bitFlowers* build process. 

https://www.crypto-city.com/video/play/1282/how-to-install-ubuntu-18-04-on-virtualbox-with-guest-additions/

-----------------

#### *1. Installing dependencies* 
-----------------
sudo apt-get install build-essential libtool autotools-dev automake pkg-config libssl-dev libevent-dev bsdmainutils python3 -y 

sudo apt-get install software-properties-common -y

sudo add-apt-repository ppa:bitcoin/bitcoin

sudo apt-get update

sudo apt-get install libdb4.8-dev libdb4.8++-dev -y

sudo apt-get install libminiupnpc-dev -y

sudo apt-get install libzmq3-dev -y

sudo apt-get install libqt5gui5 libqt5core5a libqt5dbus5 qttools5-dev qttools5-dev-tools libprotobuf-dev protobuf-compiler -y

sudo apt-get install libqt4-dev libprotobuf-dev protobuf-compiler -y

sudo apt-get install libqrencode-dev -y

sudo apt-get install libboost-all-dev -y

sudo apt-get install libssl1.0 -y

sudo apt-get install qtcreator

sudo apt-get install build-essential libgl1-mesa-dev

sudo apt install git

git clone https://github.com/crypto-city/bitflowers

-----------------

#### *2. Compiling* 

-----------------

#### **go to repo directory**

qmake bitFlowers-qt.pro

make clean

make 

-----------------

#### **to compile the daemon**

go to repo > src

sudo make -f makefile.unix USE_UPNP=1

-----------------

#### *3. Running the bitFlowers core wallet* 

-----------------

#### **to run**

./bitFlowers-qt

-----------------

#### *inquiries: crypto-city.com

-----------------








