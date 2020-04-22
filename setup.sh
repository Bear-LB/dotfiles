# Refresh Arch keyrings
pacman --noconfirm -Sy archlinux-keyring
pacman --noconfirm -S dialog
# Get name and pass variables
getuserandpass() { \
	name=$(dialog --inputbox "First, please enter a name for the user account." 10 60 3>&1 1>&2 2>&3 3>&1) || exit
	while ! echo "$name" | grep "^[a-z_][a-z0-9_-]*$" >/dev/null 2>&1; do
		name=$(dialog --no-cancel --inputbox "Username not valid. Give a username beginning with a letter, with only lowercase letters, - or _." 10 60 3>&1 1>&2 2>&3 3>&1)
	done
	pass1=$(dialog --no-cancel --passwordbox "Enter a password for that user." 10 60 3>&1 1>&2 2>&3 3>&1)
	pass2=$(dialog --no-cancel --passwordbox "Retype password." 10 60 3>&1 1>&2 2>&3 3>&1)
	while ! [ "$pass1" = "$pass2" ]; do
		unset pass2
		pass1=$(dialog --no-cancel --passwordbox "Passwords do not match.\\n\\nEnter password again." 10 60 3>&1 1>&2 2>&3 3>&1)
		pass2=$(dialog --no-cancel --passwordbox "Retype password." 10 60 3>&1 1>&2 2>&3 3>&1)
	done
	VMWAREGUEST=$(dialog --inputbox "Type 'yes' if running in VMware" 10 60 3>&1 1>&2 2>&3 3>&1)
	INSTALLDM=$(dialog --inputbox "Type 'yes' if you want a DM" 10 60 3>&1 1>&2 2>&3 3>&1)
	}
getuserandpass
# Upgrade
pacman --noconfirm -Syu
pacman --noconfirm --needed -S base-devel linux-firmware diffutils neovim man-db man-pages texinfo exfat-utils e2fsprogs
newperms() {
	sed -i "/#Deploydot/d" /etc/sudoers
	echo "$* #Deploydot" >> /etc/sudoers ;}
newperms "%wheel ALL=(ALL) NOPASSWD: ALL"
useradd -m -s /bin/bash "$name" && mkdir -p /home/"$name" && chown "$name":wheel /home/"$name"
echo "$name:$pass1" | chpasswd
unset pass1 pass2
usermod -a -G wheel,video,audio "$name"
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
sudo -u "$name" yay -S --noconfirm libxft-bgra
# Essential Software
pacman --noconfirm -S xorg-server xorg-xwininfo xorg-xinit xorg-xprop xorg-xdpyinfo xdotool mesa || { echo 'failed at installing packages from official repo' ; exit 1; }
# Bloat Software
pacman --noconfirm -S neofetch xarchiver vifm rofi ncmpcpp mpc sxhkd zathura zathura-pdf-mupdf zathura-djvu poppler || { echo 'failed at installing packages from official repo' ; exit 1; }
# Bloat Software 2
pacman --noconfirm -S newsboat picom zsh tmux htop ed arandr ffmpeg atool mediainfo youtube-dl unrar unzip socat || { echo 'failed at installing packages from official repo' ; exit 1; }
# Bloat Software 3
pacman --noconfirm -S mpv neovim gnome-keyring exfat-utils dosfstools ntfs-3g libnotify dunst bc ffmpegthumbnailer || { echo 'failed at installing packages from official repo' ; exit 1; }
# Bloat Software 4
pacman --noconfirm -S sxiv lxappearance qt5ct scrot nitrogen xorg-font-utils wget || { echo 'failed at installing packages from official repo' ; exit 1; }
# Bloat Software 5
pacman --noconfirm -S streamlink || { echo 'failed at installing packages from official repo' ; exit 1; }
# Bloat Software 6
pacman --noconfirm -S unclutter inotify-tools pcmanfm-gtk3 light xclip alsa-utils|| { echo 'failed at installing packages from official repo' ; exit 1; }
# Systemd software
pacman --noconfirm -S mpd || sudo -u "$name" yay -S --noconfirm mpd-light
# Pulseaudio
pacman --noconfirm -S pulseaudio pulseaudio-alsa pulsemixer
# I3
#pacman --noconfirm -S i3-gaps
#change shell to zsh
chsh -s /usr/bin/zsh root
chsh -s /usr/bin/zsh "$name"
# Ueberzug
sudo -u "$name" yay -S --noconfirm python-ueberzug
# Bumblebee and i3status
# sudo -u "$name" yay -S --noconfirm bumblebee-status
# sudo -u "$name" yay -S --noconfirm i3status-rust-git
# Corrupter for betterlockscreen
sudo -u "$name" yay -S --noconfirm corrupter-bin
sudo -u "$name" yay -S --noconfirm betterlockscreen
# Spotify daemon
sudo -u "$name" yay -S --noconfirm spotifyd-bin-full 
# ncurses Spotify
sudo -u "$name" yay -S --noconfirm spotify-tui-bin
# Musnify-mpd
sudo -u "$name" yay -S --noconfirm musnify-mpd
# Gotop
sudo -u "$name" yay -S --noconfirm gotop-bin
# Brave
sudo -u "$name" yay -S --noconfirm brave-bin
# Cursor
sudo -u "$name" yay -S --noconfirm posy-cursors
# DMenu
wget https://dl.suckless.org/tools/dmenu-4.9.tar.gz -O /tmp/dmenu-4.9.tar.gz
tar -xvf /tmp/dmenu-4.9.tar.gz -C /tmp/
wget https://tools.suckless.org/dmenu/patches/border/dmenu-border-4.9.diff -O /tmp/dmenu-4.9/dmenu-border-4.9.diff
wget https://tools.suckless.org/dmenu/patches/line-height/dmenu-lineheight-4.9.diff -O /tmp/dmenu-4.9/dmenu-lineheight-4.9.diff
wget https://tools.suckless.org/dmenu/patches/xyw/dmenu-xyw-4.7.diff -O /tmp/dmenu-4.9/dmenu-xyw-4.7.diff
cd /tmp/dmenu-4.9
patch --merge -i dmenu-border-4.9.diff
patch --merge -i dmenu-lineheight-4.9.diff
patch --merge -i dmenu-xyw-4.7.diff
sed -i 's+border_width = 5;+border_width = 3;+g' config.def.h
make install
# Fonts
sudo -u "$name" yay -S --noconfirm ttf-font-awesome
sudo -u "$name" yay -S --noconfirm nerd-fonts-hack
sudo -u "$name" yay -S --noconfirm ttf-iosevka
sudo -u "$name" yay -S --noconfirm ttf-joypixels
sudo -u "$name" yay -S --noconfirm nerd-fonts-cascadia-code
fc-cache
# Clone dotfiles to home
dir=$(mktemp -d)
git clone -b master --depth 1 https://github.com/Batresh/dotfiles "$dir/gitrepo"
cp -rfT "$dir/gitrepo" /home/$name
cd /home/$name
rm -rf .git
# Add blackarch repo
mkdir /usr/share/xsessions && mv /home/$name/.local/src/dwm/dwm.desktop /usr/share/xsessions/dwm.desktop
cd /home/$name/.local/src/dwm
sudo make install
cd /home/$name/.local/src/dwmblocks
sudo make install
#cd /tmp
#curl -O https://blackarch.org/strap.sh
#chmod +x strap.sh
#./strap.sh
# TMUX Plugin Manager
#sudo -u $name git clone https://github.com/tmux-plugins/tpm ~/.tmux/plugins/tpm
# This line, overwriting the `newperms` command above will allow the user to run
# serveral important commands, `shutdown`, `reboot`, updating, etc. without a password.
newperms "%wheel ALL=(ALL) ALL #Deploydot
%wheel ALL=(ALL) NOPASSWD: /usr/bin/shutdown,/usr/bin/reboot,/usr/bin/poweroff,/usr/bin/halt,/usr/bin/systemctl suspend,/usr/bin/wifi-menu,/usr/bin/mount,/usr/bin/umount,/usr/bin/pacman -Sy,/usr/bin/pacman -Syy,/usr/bin/pacman -Syu,/usr/bin/pacman -Syyu,/usr/bin/packer -Syu,/usr/bin/packer -Syyu,/usr/bin/systemctl restart NetworkManager,/usr/bin/rc-service NetworkManager restart,/usr/bin/pacman -Syyu --noconfirm,/usr/bin/loadkeys,/usr/bin/yay,/usr/bin/pacman -Syyuw --noconfirm"
# Remove System Beep
rmmod pcspkr
echo "blacklist pcspkr" > /etc/modprobe.d/nobeep.conf
# Permissions
chown -R "$name:wheel" "/home/$name"
# Because spotifyd executes command on song pause
chown "$name:wheel" /usr/bin/mpc
# Avoid blank screen when setting brigtness
sudo -u $name light -N 1
WHICHINIT=$(stat /proc/1/exe | head -1)
if [[ $WHICHINIT == *runit* ]]; then 
		dbus-uuidgen >| /etc/machine-id
		rm /run/runit/service/agetty-tty3 /run/runit/service/agetty-tty4 /run/runit/service/agetty-tty5 /run/runit/service/agetty-tty6
	if [ $VMWAREGUEST = yes ]; then
		pacman --noconfirm -S open-vm-tools xf86-video-vmware
		mkdir /etc/runit/sv/vmtoolsd
		cat > /etc/runit/sv/vmtoolsd/run << EOF
#!/bin/sh
exec /usr/bin/vmtoolsd
EOF
	chmod 755 /etc/runit/sv/vmtoolsd/run
	ln -s /etc/runit/sv/vmtoolsd /run/runit/service
	fi
	if [ $INSTALLDM = yes ]; then
		pacman -S --noconfirm lightdm lightdm-gtk-greeter lightdm-runit
	fi
fi
if [[ $WHICHINIT == *systemd* ]]; then 
	if [ $VMWAREGUEST = yes ]; then
		pacman --noconfirm -S open-vm-tools xf86-video-vmware
		systemctl enable vmtoolsd && systemctl start vmtoolsd
		systemctl enable vmware-vmblock-fuse && systemctl start vmware-vmblock-fuse
	fi
	if [ $INSTALLDM = yes ]; then
		pacman -S --noconfirm lightdm lightdm-gtk-greeter
		systemctl enable lightdm
	fi
fi
if [ $INSTALLDM = yes ]; then
	groupadd -r autologin
	gpasswd -a $name autologin
	sed -i "s/^#autologin-user=/autologin-user=$name/" /etc/lightdm/lightdm.conf
fi

# Install independent theme and plugin
git clone https://github.com/romkatv/powerlevel10k.git /opt/powerlevel10k
git clone https://github.com/zsh-users/zsh-syntax-highlighting.git /opt/zsh-syntax-highlighting
# Oh-My-Zsh. what a pain
cd ~
curl -LO https://raw.githubusercontent.com/ohmyzsh/ohmyzsh/master/tools/install.sh
tac install.sh | awk '!found && /setup_zshrc/{found=1;next}1' | sed 's+ZSH=${ZSH:-~/.oh-my-zsh+ZSH=${ZSH:-~/.config/zsh/oh-my-zsh+g' | tac > /home/$name/install.sh
sudo -u $name sh /home/$name/install.sh --unattended
mv /home/$name/.config/zsh/oh-my-zsh/lib/termsupport.zsh /home/$name/.config/zsh/oh-my-zsh/lib/termsupport.backup
sed -i 's+HISTFILE="$HOME/.zsh_history"+HISTFILE="$ZDOTDIR/zsh_history"+g' /home/$name/.config/zsh/oh-my-zsh/lib/history.zsh && [[ $WHICHINIT == *runit* ]] && ln -sf /etc/runit/sv/lightdm /run/runit/service || [[ $WHICHINIT == *systemd* ]] && systemctl start lightdm

