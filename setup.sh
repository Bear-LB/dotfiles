name=$(ls /home)
#software
pacman --noconfirm -S yay neofetch feh vifm rofi ncmpcpp mpd termite sxhkd unclutter zathura zathura-pdf-mupdf zathura-djvu newsboat
#Flashfocus
sudo -u $name yay -S --noconfirm flashfocus-git
#i3-gaps
sudo -u $name yay -S --noconfirm i3-gaps-next-git
#compton
sudo -u $name yay -S --noconfirm compton-tryone-git
#install zsh theme
git clone https://github.com/romkatv/powerlevel10k.git /opt/powerlevel10k
#install oh-my-zsh
sh -c "$(wget -O- https://raw.githubusercontent.com/robbyrussell/oh-my-zsh/master/tools/install.sh)"
#change shell to zsh (only effective after reboot)
chsh -s /usr/bin/zsh root
chsh -s /usr/bin/zsh $name
#fonts
sudo -u $name yay -S --noconfirm nerd-fonts-source-code-pro
sudo -u $name yay -S --noconfirm otf-san-francisco
#ueberzug
sudo -u $name yay -S --noconfirm python-ueberzug-git 
#spotify
sudo -u $name yay -S --noconfirm spotify
sudo -y $name yay -S --noconfirm spicetify-cli
chmod -R 777 /opt/spotify
spicetify backup apply enable-devtool
#gotop
sudo -u $name yay -S --noconfirm gotop-git
#clones dotfiles to home
dir=$(mktemp -d)
git clone -b master --depth 1 https://github.com/Batresh/dotfiles "$dir/gitrepo"
cp -rfT "$dir/gitrepo" /home/$name
cd ~
rm -rf .git
#add blackarch repo
cd /tmp
curl -O https://blackarch.org/strap.sh
chmod +x strap.sh
./strap.sh
#add .zshrc config file for root user too.
cp /home/$name/.zshrc ~/.zshrc
