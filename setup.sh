#THINGS TO MODIFY BEFORE DEPLOYMENT
#------------------------------------------------------------
# YOURNAME
name=$(echo YOURNAME)
# YOURPASSWORD
pass=$(echo YOURPASSWORD)
#-------------------------------------------------------------





useradd -m -g wheel -s /bin/bash "$name" && mkdir -p /home/"$name" && chown "$name":wheel /home/"$name"
#usermod -a -G wheel "$name" && 
echo "$name:$pass" | chpasswd
unset pass
# Preparation
# Refresh Arch keyrings and Upgrade.
pacman --noconfirm -Sy archlinux-keyring
pacman --noconfirm -Syu
pacman --noconfirm --needed -S base-devel

newperms() {
	sed -i "/#Deploydot/d" /etc/sudoers
	echo "$* #Deploydot" >> /etc/sudoers ;}

newperms "%wheel ALL=(ALL) NOPASSWD: ALL"

# Use all cores for compile
sed -i "s/-j2/-j$(nproc)/;s/^#MAKEFLAGS/MAKEFLAGS/" /etc/makepkg.conf

# Make pacman and yay nice-looking 
grep "^Color" /etc/pacman.conf >/dev/null || sed -i "s/^#Color/Color/" /etc/pacman.conf
grep "ILoveCandy" /etc/pacman.conf >/dev/null || sed -i "/#VerbosePkgLists/a ILoveCandy" /etc/pacman.conf
# Install Yay and Git
pacman --noconfirm -S git
cd /tmp
sudo -u "$name" git clone https://aur.archlinux.org/yay.git
cd yay
sudo -u "$name" makepkg --noconfirm -si
cd /tmp
# Essential Software

# Bloat Software
pacman --noconfirm -S neofetch feh vifm rofi ncmpcpp mpd termite sxhkd unclutter zathura zathura-pdf-mupdf zathura-djvu
# Bloat Software 2
pacman --noconfirm -S newsboat python-pywal compton zsh tmux
# i3-Gaps
sudo -u "$name" yay -S --noconfirm i3-gaps-next-git
# Install zsh theme
git clone https://github.com/romkatv/powerlevel10k.git /opt/powerlevel10k
# Install oh-my-zsh
sh -c "$(wget -O- https://raw.githubusercontent.com/robbyrussell/oh-my-zsh/master/tools/install.sh)"
#change shell to zsh (only effective after reboot)
chsh -s /usr/bin/zsh root
chsh -s /usr/bin/zsh "$name"
# Fonts
sudo -u "$name" yay -S --noconfirm nerd-fonts-source-code-pro
# Ueberzug
sudo -u "$name" yay -S --noconfirm python-ueberzug-git
# Flashfocus
sudo -u "$name" yay -S --noconfirm flashfocus-git
# WPGTK
sudo -u "$name" yay -S --noconfirm wpgtk
# Polybar
sudo -u "$name" yay -S --noconfirm polybar
# Spotify
sudo -u "$name" yay -S --noconfirm spotify
sudo -y "$name" yay -S --noconfirm spicetify-cli
chmod -R 777 /opt/spotify
spicetify backup apply enable-devtool
# Gotop
sudo -u "$name" yay -S --noconfirm gotop-git
# Musnify-mpd
sudo -u "$name" yay -S --noconfirm musnify-mpd
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

# This line, overwriting the `newperms` command above will allow the user to run
# serveral important commands, `shutdown`, `reboot`, updating, etc. without a password.
newperms "%wheel ALL=(ALL) ALL #Deploydot
%wheel ALL=(ALL) NOPASSWD: /usr/bin/shutdown,/usr/bin/reboot,/usr/bin/systemctl suspend,/usr/bin/wifi-menu,/usr/bin/mount,/usr/bin/umount,/usr/bin/pacman -Syu,/usr/bin/pacman -Syyu,/usr/bin/packer -Syu,/usr/bin/packer -Syyu,/usr/bin/systemctl restart NetworkManager,/usr/bin/rc-service NetworkManager restart,/usr/bin/pacman -Syyu --noconfirm,/usr/bin/loadkeys,/usr/bin/yay,/usr/bin/pacman -Syyuw --noconfirm"

# Remove System Beep
rmmod pcspkr
echo "blacklist pcspkr" > /etc/modprobe.d/nobeep.conf

# Start and enable Services
systemctl enable NetworkManager
systemctl enable cronie
systemctl start NetworkManager
systemctl start cronie
