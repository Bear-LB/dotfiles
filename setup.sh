name=$(ls /home)
# Software
pacman --noconfirm -S yay neofetch feh vifm rofi ncmpcpp mpd termite sxhkd unclutter zathura zathura-pdf-mupdf zathura-djvu
# Software 2
pacman --noconfirm -S newsboat pywal compton
# i3-Gaps
sudo -u $name yay -S --noconfirm i3-gaps-next-git
# Compton
sudo -u $name yay -S --noconfirm compton-tryone-git
# Install zsh theme
git clone https://github.com/romkatv/powerlevel10k.git /opt/powerlevel10k
# Install oh-my-zsh
sh -c "$(wget -O- https://raw.githubusercontent.com/robbyrussell/oh-my-zsh/master/tools/install.sh)"
#change shell to zsh (only effective after reboot)
chsh -s /usr/bin/zsh root
chsh -s /usr/bin/zsh $name
# Fonts
sudo -u $name yay -S --noconfirm nerd-fonts-source-code-pro
# Ueberzug
sudo -u $name yay -S --noconfirm python-ueberzug-git
# Flashfocus
sudo -u $name yay -S --noconfirm flashfocus-git
# WPGTK
sudo -u $name yay -S --noconfirm wpgtk
# Spotify
sudo -u $name yay -S --noconfirm spotify
sudo -y $name yay -S --noconfirm spicetify-cli
chmod -R 777 /opt/spotify
spicetify backup apply enable-devtool
# Gotop
sudo -u $name yay -S --noconfirm gotop-git
# Musnify-mpd
sudo -u $name yay -S --noconfirm musnify-mpd
# Clone dotfiles to home
dir=$(mktemp -d)
git clone -b master --depth 1 https://github.com/Batresh/dotfiles "$dir/gitrepo"
cp -rfT "$dir/gitrepo" /home/$name
cd ~
rm -rf .git
# Add blackarch repo
cd /tmp
curl -O https://blackarch.org/strap.sh
chmod +x strap.sh
./strap.sh
# Add .zshrc config file for root user too.
cp /home/$name/.zshrc ~/.zshrc
# Make pacman and yay colorful and adds eye candy on the progress bar because why not.
grep "^Color" /etc/pacman.conf >/dev/null || sed -i "s/^#Color/Color/" /etc/pacman.conf
grep "ILoveCandy" /etc/pacman.conf >/dev/null || sed -i "/#VerbosePkgLists/a ILoveCandy" /etc/pacman.conf
