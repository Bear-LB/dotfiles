#software
pacman --noconfirm -S yay neofetch feh vifm rofi ncmpcpp mpd termite sxhkd unclutter zathura zathura-pdf-mupdf zathura-djvu
#i3-gaps
sudo -u bear yay -S --noconfirm i3-gaps-next-git
#compton
sudo -u bear yay -S --noconfirm compton-git
#install zsh theme
git clone https://github.com/romkatv/powerlevel10k.git /opt/powerlevel10k
#install oh-my-zsh
sh -c "$(wget -O- https://raw.githubusercontent.com/robbyrussell/oh-my-zsh/master/tools/install.sh)"
#change shell to zsh (only effective after reboot)
chsh -s /usr/bin/zsh root
chsh -s /usr/bin/zsh bear
#nerd fonts
sudo -u bear yay -S --noconfirm nerd-fonts-source-code-pro
#ueberzug
sudo -u bear yay -S --noconfirm python-ueberzug-git 
#flashfocus REQUIRES REMOVAL... FIX
sudo -u bear yay -S --noconfirm flashfocus-git
#spotify
sudo -u bear yay -S --noconfirm spotify
#gotop
sudo -u bear yay -S --noconfirm gotop-git
#clones dotfiles to home
dir=$(mktemp -d)
git clone -b master --depth 1 https://github.com/Batresh/dotfiles "$dir/gitrepo"
cp -rfT "$dir/gitrepo" /home/bear
cd ~
rm -rf .git
#add .zshrc config file for root user too.
cp /home/bear/.zshrc ~/.zshrc
