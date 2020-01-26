# THINGS TO MODIFY BEFORE DEPLOYMENT
#------------------------------------------------------------
# YOURNAME
name="YOURNAME"
# YOURPASSWORD
pass="YOURPASSWORD"
#-------------------------------------------------------------
















useradd -m -s /bin/bash "$name" && mkdir -p /home/"$name" && chown "$name":wheel /home/"$name"
echo "$name:$pass" | chpasswd
unset pass
usermod -a -G wheel,video "$name"
# Refresh Arch keyrings
pacman --noconfirm -Sy archlinux-keyring
# Upgrade.
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
pacman --noconfirm -S xorg-server xorg-xwininfo xorg-xinit xorg-xprop xorg-xdpyinfo xdotool mesa || { echo 'failed at installing packages from official repo' ; exit 1; }
# Bloat Software
pacman --noconfirm -S neofetch xarchiver vifm rofi ncmpcpp mpc termite sxhkd zathura zathura-pdf-mupdf zathura-djvu poppler || { echo 'failed at installing packages from official repo' ; exit 1; }
# Bloat Software 2
pacman --noconfirm -S newsboat python-pywal picom zsh tmux htop ed arandr ffmpeg atool mediainfo youtube-dl unrar unzip socat || { echo 'failed at installing packages from official repo' ; exit 1; }
# Bloat Software 3
pacman --noconfirm -S firefox mpv neovim gnome-keyring exfat-utils dosfstools ntfs-3g libnotify dunst bc ffmpegthumbnailer bspwm || { echo 'failed at installing packages from official repo' ; exit 1; }
# Bloat Software 4
pacman --noconfirm -S sxiv pulseaudio pulseaudio-alsa pulsemixer xsettingsd lxappearance scrot nitrogen xorg-font-utils wget || { echo 'failed at installing packages from official repo' ; exit 1; }
# Bloat Software 5
pacman --noconfirm -S streamlink adobe-source-han-sans-jp-fonts playerctl i3-gaps || { echo 'failed at installing packages from official repo' ; exit 1; }
# Bloat Software 6
pacman --noconfirm -S unclutter inotify-tools pcmanfm-gtk3 light || { echo 'failed at installing packages from official repo' ; exit 1; }
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
# Musnify-mpd
sudo -u "$name" yay -S --noconfirm musnify-mpd
# Gotop
sudo -u "$name" yay -S --noconfirm gotop-bin
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
# TMUX Plugin Manager
sudo -u $name git clone https://github.com/tmux-plugins/tpm ~/.tmux/plugins/tpm
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
#
sudo -u $name light -N 1
# WPG Pictures and templates
sudo -u "$name" wpg -a /home/$name/Pictures/Wallpapers/*
sudo -u "$name" wpg -ta /home/$name/.config/i3/config
sudo -u "$name" wpg -ta /home/$name/.config/polybar/config
sudo -u "$name" wpg -ta /home/$name/.config/dunst/dunstrc
# s6 + s66-rc. Disabled due to having problems creating a dbus session
#pacman --noconfirm -S lightdm-66serv && pacman --noconfirm -S dbus-66serv consolekit2 consolekit-66serv networkmanager-66serv dhclient-66serv
#pacman --noconfirm -S boot-user@-66mod
#66-mods.sh boot-user@$name
#66-tree -nE boot-user
#66-enable -t boot-user All-$name && sed -i "\$a[ -f ~/.profile ] && . ~/.profile" /home/$name/.xsession
#66-tree -ncE desktop
#66-enable -t desktop dbus consolekit lightdm networkmanager
#66-disable -t root dhcpcd
#sudo -u $name 66-tree -nE $name
#sudo -u $name 66-enable -t $name dbus-session@$name
# Systemd
#systemctl enable NetworkManager
#systemctl enable lightdm
#systemctl start NetworkManager
# Artix specific
dbus-uuidgen > /var/lib/dbus/machine-id
# Oh-My-Zsh. what a pain
curl -Lo install.sh https://raw.githubusercontent.com/ohmyzsh/ohmyzsh/master/tools/install.sh
tac install.sh | awk '!found && /setup_zshrc/{found=1;next}1' | sed 's+ZSH=${ZSH:-~/.oh-my-zsh+ZSH=${ZSH:-~/.config/zsh/oh-my-zsh+g' | tac > /home/$name/install.sh
sudo -u $name sh /home/$name/install.sh --unattended
mv /home/$name/.config/zsh/oh-my-zsh/lib/termsupport.zsh /home/$name/.config/zsh/oh-my-zsh/lib/termsupport.backup
