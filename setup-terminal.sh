#!/bin/bash
# This script will setup the config files for a pleasent terminal workflow experience for Ubuntu 24.04
[ "$(id -u)" -eq 0 ] || {
    echo "This script must be run as root"
    exit 1
}

dirs=$(ls -1 /home/)
i=1
for d in $dirs; do
    echo "$i) $d"
    i=$((i + 1))
done
printf "Enter number: "
read n
[ "$n" -eq "$n" ] 2>/dev/null || {
    echo "Invalid input"
    exit 1
}
USER=$(echo "$dirs" | sed -n "${n}p")
[ -z "$USER" ] && {
    echo "Invalid selection"
    exit 1
}
echo "Selected: $USER"

[ -d /home/"$USER"/GIT/dotfiles ] || {
    echo "~/GIT/dotfiles does not exist"
    exit 1
}

apt install zsh golang ninja-build gettext cmake unzip curl dash
ln -sfT /bin/dash /bin/sh >/dev/null 2>&1
mkdir -p /home/"$USER"/.cache/zsh/

#LF
su $USER sh -c 'env CGO_ENABLED=0 go install -ldflags="-s -w" github.com/gokcehan/lf@latest'
mv /home/"$USER"/.local/share/go/bin/lf /usr/bin/ && chown root:root /usr/bin/lf
su $USER sh -c 'go clean --cache'
go clean --cache
#NEOVIM
git clone https://github.com/neovim/neovim /tmp/neovim
cd /tmp/neovim/
git checkout stable
make CMAKE_BUILD_TYPE=RelWithDebInfo
make install

ln -sfv /home/"$USER"/GIT/dotfiles/.config/lf /home/"$USER"/.config/
ln -sfv /home/"$USER"/GIT/dotfiles/.config/nvim /home/"$USER"/.config/
ln -sfv /home/"$USER"/GIT/dotfiles/.config/zsh /home/"$USER"/.config/
ln -sfv /home/"$USER"/GIT/dotfiles/.config/shell /home/"$USER"/.config/
ln -sfv /home/"$USER"/GIT/dotfiles/.zprofile /home/"$USER"/

command -v zsh >/dev/null || echo 'CMD not found' || chsh $USER -s /bin/zsh/
