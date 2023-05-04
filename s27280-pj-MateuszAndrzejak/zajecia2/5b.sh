#!/bin/bash

text=$1

echo "Pierwszy znak: ${text:0:1}"

echo "Ostatni znak: ${text: -1}"
