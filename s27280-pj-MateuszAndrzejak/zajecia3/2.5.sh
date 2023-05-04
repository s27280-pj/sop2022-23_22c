#!/bin/bash

if [[ $# -eq 0 ]]; then
  echo "Nie podano plików do wyświetlenia."
  exit 1
fi

echo "Kolejność od początku:"
for file in "$@"; do
  echo "------ $file ------"
  while IFS= read -n1 char; do
    echo -n "$char"
  done < "$file"
  echo ""
done

echo "Kolejność od końca:"
for (( i=$#; i>0; i-- )); do
  file="${!i}"
  echo "------ $file ------"
  while IFS= read -n1 char; do
    echo -n "$char"
  done < <(tac "$file")
  echo ""
done
