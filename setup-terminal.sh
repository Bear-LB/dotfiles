#!/bin/bash
# This script will setup the config files for a pleasent terminal workflow experience

#git clone -b master --depth 1 https://github.com/Bear-LB/dotfiles
USER=$(whoami)
ln -sfv /home/"$USER"/GIT/dotfiles/.config/lf /home/"$USER"/.config/
ln -sfv /home/"$USER"/GIT/dotfiles/.config/nvim /home/"$USER"/.config/
ln -sfv /home/"$USER"/GIT/dotfiles/.config/zsh /home/"$USER"/.config/
ln -sfv /home/"$USER"/GIT/dotfiles/.zprofile /home/"$USER"/

command -v zsh > /dev/null || echo 'CMD not found' || chsh $USER -s /bin/zsh/
