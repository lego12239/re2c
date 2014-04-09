#!/bin/bash

for fre in unicode_{group_*,blocks}.{8,x}.re
do
    echo $fre
    fc=${fre/.re/.c}
    fe=${fre/.re/}
    re2c_switch=${fe##*.}

    # compile re2c source
    ../re2c -$re2c_switch $fre \
    | sed -e "s,/\* Generated by re2c .*\*/,/\* Generated by re2c \*/,g" > $fc

    # compile C source
    g++ -W -Wall -Wextra $fc -o $fe

    # execute (runs silently if OK, otherwize report an error)
    ./$fe

    rm -f $fe
done