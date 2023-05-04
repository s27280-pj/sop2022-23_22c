#!/bin/bash

if [ -e "config.cfg" ]; then
    source config.cfg
elif [ $# -ge 1 ]; then
    source "$1"
else
    echo "Błąd: Nie znaleziono pliku konfiguracyjnego ani nie podano argumentu."
fi
