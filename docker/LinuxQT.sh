sudo apt-get update && sudo apt install -y software-properties-common && sudo apt-add-repository -y ppa:bitcoin/bitcoin && sudo apt-get update &&
sudo apt-get install -y -o Dpkg::Options::="--force-confdef" -o Dpkg::Options::="--force-confold" make software-properties-common \
build-essential libtool autoconf  libboost-dev libboost-chrono-dev libboost-filesystem-dev libboost-program-options-dev \
libboost-system-dev libboost-test-dev libboost-thread-dev sudo automake git wget curl libdb4.8-dev bsdmainutils libdb4.8++-dev \
libminiupnpc-dev libgmp3-dev ufw pkg-config libevent-dev  libdb5.3++ unzip libzmq5 libssl1.0-dev qt4-qmake libqt4-dev build-essential libboost-dev libboost-system-dev \
cd ..
qmake bitFlowers-qt.pro
make -j8
