export PATH="$PATH:$(du "$HOME/.local/bin/" | cut -f2 | tr '\n' ':' | sed 's/:*//')"
export TERMINAL="termite"
export ZDOTDIR="$HOME/.config/zsh"
export EDITOR="nvim"
export FILE="$HOME/.config/vifm/scripts/vifmrun"
export BROWSER="firefox"
[ "$(tty)" = "/dev/tty1" ] && ! pgrep -x Xorg >/dev/null && exec startx
