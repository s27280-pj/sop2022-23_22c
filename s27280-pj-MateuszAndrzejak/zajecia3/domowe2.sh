#!/bin/bash

read -p "Podaj kod pocztowy: " kod_pocztowy

regex='^[0-9]{2}-[0-9]{3}$'

if [[ $kod_pocztowy =~ $regex ]]; then
    echo "Podany tekst $kod_pocztowy jest poprawnym kodem pocztowym."
else
    echo "Podany tekst $kod_pocztowy nie jest poprawnym kodem pocztowym."
fi
