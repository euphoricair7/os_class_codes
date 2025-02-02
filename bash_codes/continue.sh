#!/bin/bash

#same code for continue and 4
7
for num in {6..12}
do 
    if [[ $var -eq 10 ]] then
        break
    fi 

    echo "value: $num"
done