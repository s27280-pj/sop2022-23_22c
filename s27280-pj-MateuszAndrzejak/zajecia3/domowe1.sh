#!/bin/bash

read -p "Podaj imię: " imie

if [[ $imie =~ ^[A-ZĄĆĘŁŃÓŚŹŻ][a-ząćęłńóśźż]+$ ]]; then
  echo "Podane imię jest poprawne."
else
  echo "Podane imię jest niepoprawne."
fi
