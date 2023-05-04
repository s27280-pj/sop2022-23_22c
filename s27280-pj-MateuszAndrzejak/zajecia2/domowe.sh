#!/bin/bash

if [ $# -eq 0 ]
  then
    echo "Nie podano nazwy pliku jako argument."
    exit 1
fi

if [ ! -f $1 ]
  then
    echo "Plik $1 nie istnieje."
    exit 1
fi

while read line
do
    echo $line | sed 's/Mateusz/\o033[31m&\o033[0m/g'
done < $1
