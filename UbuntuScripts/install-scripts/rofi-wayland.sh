#!/bin/bash
# 💫 https://github.com/JaKooLit 💫 #
# Rofi-Wayland) #

rofi=(
  bison
  flex
  pandoc
  doxygen
  cppcheck
  ohcount
  libmpdclient-dev
  libnl-3-dev
  libasound2-dev
  imagemagick
  wget
)

## WARNING: DO NOT EDIT BEYOND THIS LINE IF YOU DON'T KNOW WHAT YOU ARE DOING! ##
# Determine the directory where the script is located
SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

# Change the working directory to the parent directory of the script
PARENT_DIR="$SCRIPT_DIR/.."
cd "$PARENT_DIR" || exit 1

source "$(dirname "$(readlink -f "$0")")/Global_functions.sh"

# Set the name of the log file to include the current date and time
LOG="Install-Logs/install-$(date +%d-%H%M%S)_rofi_wayland.log"
MLOG="install-$(date +%d-%H%M%S)_rofi_wayland2.log"

# uninstall other rofi
for PKG in "rofi" "bison"; do
  uninstall_package "$PKG" 2>&1 | tee -a "$LOG"
  if [ $? -ne 0 ]; then
    echo -e "\e[1A\e[K${ERROR} - $PKG uninstallation had failed, please check the log"
    exit 1
  fi
done

sleep 1
printf "\n"
# Installation of main components
printf "\n%s - Installing rofi-wayland dependencies.... \n" "${NOTE}"

printf "${NOTE} Force installing packages...\n"
 for FORCE in "${rofi[@]}"; do
   sudo apt-get --reinstall install -y "$FORCE" 2>&1 | tee -a "$LOG"
   [ $? -ne 0 ] && { echo -e "\e[1A\e[K${ERROR} - $FORCE Package installation failed, Please check the installation logs"; exit 1; }
  done

printf "\n\n"

# Clone and build rofi - wayland
printf "${NOTE} Installing rofi-wayland...\n"

# Check if rofi folder exists
if [ -d "rofi-1.7.5+wayland3" ]; then
  rm -rf "rofi-1.7.5+wayland3"
fi

# cloning rofi-wayland
printf "${NOTE} Downloading rofi-wayland v1.7.5+wayland3 from releases...\n"
wget https://github.com/lbonn/rofi/releases/download/1.7.5%2Bwayland3/rofi-1.7.5+wayland3.tar.gz

if [ -f "rofi-1.7.5+wayland3.tar.gz" ]; then
  printf "rofi-wayland downloaded successfully.\n" 2>&1 | tee -a "$LOG"
  tar xf rofi-1.7.5+wayland3.tar.gz
fi

cd rofi-1.7.5+wayland3 || exit 1

# Proceed with the installation steps
if meson setup build && ninja -C build ; then
  if sudo ninja -C build install 2>&1 | tee -a "$MLOG"; then
    printf "${OK} rofi-wayland installed successfully.\n" 2>&1 | tee -a "$MLOG"
  else
    echo -e "${ERROR} Installation failed for rofi-wayland." 2>&1 | tee -a "$MLOG"
  fi
else
  echo -e "${ERROR} Meson setup or ninja build failed for rofi-wayland." 2>&1 | tee -a "$MLOG"
fi

# Move logs to Install-Logs directory
mv "$MLOG" ../Install-Logs/ || true
cd .. || exit 1

# clean up
rm -rf rofi-1.7.5+wayland3.tar.gz

clear
