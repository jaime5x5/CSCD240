#!/bin/bash
read -p "Enter one whole number:  " Num1
read -p "Enter another whole number:  " Num2

if [[ $Num1 < $Num2 ]] ; then
	echo $Num1 "is smaller than" $Num2
else
	echo $Num1 "is not smaller than" $Num2
fi
