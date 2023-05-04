#!/bin/bash

if [ $# -ne 1 ]; then
  echo "Nie podano argumentu"
  exit 1
fi

echo "Pierwszy znak: ${1:0:1}"
echo "Ostatni znak: ${1: -1}"

echo "${1}" | sed 's/SOP/\\e[32mSOP\\e[0m/g'
