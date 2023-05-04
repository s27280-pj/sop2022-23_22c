#!/bin/bash

function koloruj {
    local kolor=$1
    local tekst=$2

    local czerwony="\033[0;31m"
    local zielony="\033[0;32m"
    local zolty="\033[0;33m"
    local niebieski="\033[0;34m"
    local rozowy="\033[0;35m"
    local bialy="\033[0;37m"

    case $kolor in
        "czerwony")
            echo -e "${czerwony}${tekst}${bialy}"
            ;;
        "zielony")
            echo -e "${zielony}${tekst}${bialy}"
            ;;
        "zolty")
            echo -e "${zolty}${tekst}${bialy}"
            ;;
        "niebieski")
            echo -e "${niebieski}${tekst}${bialy}"
            ;;
        "rozowy")
            echo -e "${rozowy}${tekst}${bialy}"
            ;;
        *)
            echo "Błąd: Nieprawidłowy kolor"
            ;;
    esac
}

koloruj "czerwony" "To jest czerwony tekst!"
koloruj "zielony" "To jest zielony tekst!"
koloruj "zolty" "To jest żółty tekst!"
koloruj "niebieski" "To jest niebieski tekst!"
koloruj "rozowy" "To jest różowy tekst!"
