#!/bin/bash

echo "Podaj adres e-mail:"
read email

if [[ $email =~ ^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$ ]]; then
  echo "Adres $email jest poprawny."
else
  echo "Adres $email jest niepoprawny."
fi
