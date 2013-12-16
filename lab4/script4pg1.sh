#!/bin/bash
read -p "Enter one whole number:  " Num1
read -p "Enter another whole number:  " Num2

if [[ $Num1 < $Num2 ]] ; then
	echo $Num1 "is less than" $Num2
elif [[ $Num1 > $Num2 ]] ; then
	echo $Num1 "is greater than" $Num2		
else
	echo $Num1 "is equal to" $Num2
fi
