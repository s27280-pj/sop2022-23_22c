#!/bin/bash

fibonacci() {
    local n=$1
    if (( n == 0 )); then
        return 0
    elif (( n == 1 )); then
        return 1
    else
        local a=0
        local b=1
        for (( i=2; i<=n; i++ )); do
            local c=$((a + b))
            a=$b
            b=$c
        done
        return $b
    fi
}

fibonacci 10
echo "10-ty wyraz ciągu Fibonacciego to: $?"
