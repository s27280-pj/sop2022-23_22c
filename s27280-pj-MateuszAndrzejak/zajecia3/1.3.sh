#!/bin/bash

filename=$(basename "$0")
if [[ $filename != *.sh ]]; then
  mv "$filename" "${filename}.sh"
  echo "Zmieniono nazwę pliku na ${filename}.sh"
fi
