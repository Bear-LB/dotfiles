#!/bin/bash
# This script will setup the config files for a pleasent terminal workflow experience
cd ~
git clone -b master --depth 1 https://github.com/Bear-LB/dotfiles
USER=$(whoami)
ln -sf /home/"$USER"/dotfiles/.config/lf /home/"$USER"/.config/lf
ln -sf /home/"$USER"/dotfiles/.config/nvim /home/"$USER"/.config/nvim
ln -sf /home/"$USER"/dotfiles/.config/zsh /home/"$USER"/.config/zsh
ln -sf /home/"$USER"/dotfiles/.zprofile /home/"$USER"/.config/.zprofile
