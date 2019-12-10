# THINGS TO MODIFY BEFORE DEPLOYMENT
#------------------------------------------------------------
# YOURNAME
name=$(echo YOURNAME)
# YOURPASSWORD
pass=$(echo YOURPASSWORD)
#-------------------------------------------------------------
# Remember to install corresponding drivers
















useradd -m -g wheel -s /bin/bash "$name" && mkdir -p /home/"$name" && chown "$name":wheel /home/"$name"
echo "$name:$pass" | chpasswd
unset pass
# Preparation
# Refresh Arch keyrings and Upgrade.
pacman --noconfirm -Sy archlinux-keyring
pacman --noconfirm -Syu
pacman --noconfirm --needed -S base-devel linux-firmware diffutils vim networkmanager man-db man-pages texinfo exfat-utils e2fsprogs
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
pacman --noconfirm -S xorg-server xorg-xwininfo xorg-xinit xorg-xprop xorg-xbacklight xorg-xdpyinfo xdotool mesa
# Bloat Software
pacman --noconfirm -S neofetch xarchiver vifm rofi ncmpcpp mpc termite sxhkd unclutter zathura zathura-pdf-mupdf zathura-djvu poppler
# Bloat Software 2
pacman --noconfirm -S newsboat python-pywal compton zsh tmux htop ed arandr ffmpeg atool mediainfo youtube-dl unrar unzip socat
# Bloat Software 3
pacman --noconfirm -S firefox mpv neovim gnome-keyring exfat-utils dosfstools ntfs-3g libnotify dunst bc ffmpegthumbnailer
# Bloat Software 4
pacman --noconfirm -S sxiv pulseaudio pulseaudio-alsa pulsemixer xsettingsd lxappearance scrot nitrogen
# Bloat Software 5
pacman --noconfirm -S xorg-font-utils streamlink wget adobe-source-han-sans-jp-fonts playerctl i3-gaps
# Systemd software ?!
pacman --noconfirm -S mpd || sudo -u "$name" yay -S --noconfirm mpd-light
pacman --noconfirm -S transmission-cli && sudo -u "$name" yay -S --noconfirm stig
# Install zsh theme
git clone https://github.com/romkatv/powerlevel10k.git /opt/powerlevel10k
# Install oh-my-zsh --------------------------------------------- WORKS IN PROGRESS
#change shell to zsh (only effective after reboot)
chsh -s /usr/bin/zsh root
chsh -s /usr/bin/zsh "$name"
# Ueberzug
sudo -u "$name" yay -S --noconfirm python-ueberzug
# Flashfocus
sudo -u "$name" yay -S --noconfirm flashfocus-git
# WPGTK
sudo -u "$name" yay -S --noconfirm wpgtk
# Corrupter for betterlockscreen
sudo -u "$name" yay -S --noconfirm corrupter-bin
sudo -u "$name" yay -S --noconfirm betterlockscreen
# Polybar
sudo -u "$name" yay -S --noconfirm polybar
# Spotify daemon
sudo -u "$name" yay -S --noconfirm spotifyd-bin-full 
# ncurses Spotify
sudo -u "$name" yay -S --noconfirm spotify-tui
# Gotop
sudo -u "$name" yay -S --noconfirm gotop-bin
# Musnify-mpd
sudo -u "$name" yay -S --noconfirm musnify-mpd
¤ Fonts
wget https://github.com/ryanoasis/nerd-fonts/releases/download/v2.0.0/Iosevka.zip -O /tmp/Iosevka.zip
unzip /tmp/Iosevka.zip
wget https://github.com/ryanoasis/nerd-fonts/releases/download/v2.0.0/Cousine.zip -O /tmp/Cousine.zip
unzip /tmp/Cousine.zip
rm /tmp/*Windows*
mkdir /usr/share/fonts/iosevka && mkdir /usr/share/fonts/cousine/
cp /tmp/Cousine* /usr/share/fonts/cousine/ && cp /tmp/Iosevka* /usr/share/fonts/iosevka/
fc-cache
# Clone dotfiles to home
dir=$(mktemp -d)
git clone -b master --depth 1 https://github.com/Batresh/dotfiles "$dir/gitrepo"
cp -rfT "$dir/gitrepo" /home/$name
cd /home/$name
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
# Permissions
chown -R "$name:wheel" "/home/$name"
# Because spotifyd executes command on song pause
chown "$name:wheel" /usr/bin/mpc
# WPG Pictures and templates
sudo -u $name wpg -a /home/$name/Pictures/Wallpapers/*
sudo -u $name wpg -ta /home/$name/.config/i3/config
sudo -u $name wpg -ta /home/$name/.config/polybar/config
sudo -u $name wpg -ta /home/$name/.config/dunst/dunstrc
# Lightdm; Only installs serv files on Obarun
pacman --noconfirm -S lightdm lightdm-webkit2-greeter
pacman --noconfirm -S lightdm-66serv && pacman --noconfirm -S dbus-66serv consolekit2 consolekit-66serv networkmanager-66serv dhclient-66serv
sudo -u "$name" yay -S --noconfirm lightdm-webkit-theme-aether
# s6 and s6-rc; Letting s66 set up lightdm fucks with enviroment variables 
pacman --noconfirm -S boot-user@-66mod
66-mods.sh boot-user@$name
66-tree -nE $name-session
66-enable -t $name-session All-$name && sed -i "\$a[ -f ~/.profile ] && . ~/.profile" /home/$name/.xsession
66-tree -ncE desktop
66-enable -t desktop dbus consolekit lightdm networkmanager
66-disable -t root dhcpcd
sudo -u $name 66-tree -nE $name
sudo -u $name 66-enable -t $name dbus-session@$name

# Systemctl
systemctl enable NetworkManager
systemctl enable lightdm
systemctl start NetworkManager
# Avoid Getting DNS
sed -i "\$aexport PATH="$PATH:$(du "$HOME/.local/bin/" | cut -f2 | tr '\n' ':' | sed 's/:*//')"" /etc/NetworkManager/NetworkManager.conf
# Package Cleanup
pacman --noconfirm -R dhcpcd
pacman --noconfirm -R dhcpcd-66serv
# Because Artix service doesnt regenerate machine-id by itself
dbus-uuidgen > /var/lib/dbus/machine-id
# Ohmyzsh
sudo -u $name sh -c "$(wget -O- https://raw.githubusercontent.com/ohmyzsh/ohmyzsh/master/tools/install.sh)"
