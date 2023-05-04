#!/bin/bash

if [ $# -ge 2 ]; then
  echo "Podano więcej niż jeden argument. Pierwszy argument: $1"
elif [ $# -eq 1 ]; then
  echo "Podano jeden argument: $1"
else
  echo "Nie podano argumentów."
fi
