pacman --noconfirm -S yay neofetch feh vifm rofi ncmpcpp mpd termite sxhkd unclutter
#i3-gaps
sudo -u bear yay -S --noconfirm i3-gaps-next-git
#compton
sudo -u bear yay -S --noconfirm compton-git

#ln -s /usr/local/share/terminfo/x/xterm-termite /lib/terminfo/x/xterm-termite
#update-alternatives --install /usr/bin/x-terminal-emulator x-terminal-emulator /usr/local/bin/termite 60
#install zsh theme
git clone https://github.com/romkatv/powerlevel10k.git /opt/powerlevel10k
#change shell to zsh
chsh -s /usr/bin/zsh root
chsh -s /usr/bin/zsh bear
#nerd fonts
sudo -u bear yay -S --noconfirm nerd-fonts-source-code-pro
#ueberzug
sudo -u bear yay -S --noconfirm python-ueberzug-git 
#flashfocus
sudo -u bear yay -S --noconfirm flashfocus-git
#clones dotfiles to home
dir=$(mktemp -d)
git clone -b master --depth 1 https://github.com/Batresh/heavydot "$dir/gitrepo"
cp -rfT "$dir/gitrepo" /home/bear
cd ~
rm -rf .git
#add .zshrc config file for root user too.
cp /home/bear/.zshrc ~/.zshrc
