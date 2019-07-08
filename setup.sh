apt update -y
apt install i3 -y
#dependencies for i3-gaps
apt install -y libxcb1-dev libxcb-keysyms1-dev libpango1.0-dev libxcb-util0-dev libxcb-icccm4-dev libyajl-dev libstartup-notification0-dev libxcb-randr0-dev libev-dev libxcb-cursor-dev libxcb-xinerama0-dev libxcb-xkb-dev libxkbcommon-dev libxkbcommon-x11-dev autoconf xutils-dev libtool libxcb-shape0-dev libxcb-xrm-dev
mkdir ~/tmp && cd ~/tmp
git clone https://www.github.com/Airblader/i3 i3-gaps
cd i3-gaps
autoreconf --force --install
rm -rf build/
mkdir -p build && cd build/
../configure --prefix=/usr --sysconfdir=/etc --disable-sanitizers
make && make install
#software
apt install -y neofetch feh vifm rofi

#dependencies for termite
apt install -y libgtk-3-dev gtk-doc-tools gnutls-bin valac intltool libpcre2-dev libglib3.0-cil-dev libgnutls28-dev libgirepository1.0-dev gperf
cd ~/tmp
git clone https://github.com/thestinger/vte-ng.git
echo export LIBRARY_PATH="/usr/include/gtk-3.0:$LIBRARY_PATH"
cd vte-ng
./autogen.sh
make && make install
cd ~/tmp
git clone --recursive https://github.com/thestinger/termite.git
cd termite
make && make install
ldconfig
mkdir -p /lib/terminfo/x
ln -s /usr/local/share/terminfo/x/xterm-termite /lib/terminfo/x/xterm-termite
update-alternatives --install /usr/bin/x-terminal-emulator x-terminal-emulator /usr/local/bin/termite 60
#change shell to zsh
chsh -s /usr/bin/zsh root
chsh -s /usr/bin/zsh bear
#install theme
git clone https://github.com/romkatv/powerlevel10k.git /opt/powerlevel10k

#compton with blur
apt build-dep compton
cd ~/tmp
git clone https://github.com/tryone144/compton
make
make docs
make install
#clones dotfiles to home
dir=$(mktemp -d)
git clone -b master --depth 1 https://github.com/Batresh/heavydot "$dir/gitrepo"
cp -rfT "$dir/gitrepo" /home/bear
