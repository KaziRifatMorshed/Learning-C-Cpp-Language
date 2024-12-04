#!/usr/bin/bash
echo "File name is ${0}"
echo $3 # $3 holds banana
Data=$5
echo "A $Data costs just $6."
Data=$1
echo "A $Data costs just $2."
echo $#
printf "$@"
