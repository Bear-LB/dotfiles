#!/bin/sh
export PATH="$PATH:$(du "$HOME/.local/bin/" | cut -f2 | tr '\n' ':' | sed 's/:*//')"
export TERMINAL="termite"
export EDITOR="nvim"
export FILE="vifm"
export BROWSER="firefox"
