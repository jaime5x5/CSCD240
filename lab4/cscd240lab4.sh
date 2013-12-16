#!/bin/bash

# Jaime Williams CSCD240 Lab4 shell scripting

#argCount

if [[ $# -ge 0 ]]; then
		numArgs=$#
		echo "$numArgs"
		
	if [[ $numArgs -eq 0 ]]; then
		echo "There are no args: $numArgs"
		read -p "Please enter a number greater than 100: " num
		read -p "Please enter a valid file name: " fileName
		read -p "Please enter a valid directory name: " startDir
		
	elif [[ $numArgs -eq "1" ]]; then
		echo "There is only one arg: "
		read -p "Please enter a number greater than 100: " num
		read -p "Please enter a valid file name: " fileName
		read -p "Please enter a valid directory name: " startDir
		
	elif [[ $numArgs -eq "2" ]]; then
		echo "There are only two args: "
		read -p "Please enter a number greater than 100: " num
		read -p "Please enter a valid file name: " fileName
		read -p "Please enter a valid directory name: " startDir
		
	elif [[ $numArgs -ge "4" ]]; then
		echo "There are to many args: "
		read -p "Please enter a number greater than 100: " num
		read -p "Please enter a valid file name: " fileName
		read -p "Please enter a valid directory name: " startDir
	fi	
fi

if [[ $numArgs -eq 3 ]]; then
	for numArgs in $#
		do
			startDir=$3
			((numArgs= $numArgs - 1))
			fileName=$2
			((numArgs= $numArgs - 1))
			num=$1
			((numArgs= $numArgs - 1))
		done
fi

while [[ $num -le 100 ]]
do
	read -p "Please enter a number greater than 100: " num
	#echo "$num"
done

while [[ ! -f $fileName ]]
do 
	read -p "Please enter a valid file name: " fileName
	#echo "$fileName"
done

while [[ ! -d $startDir ]]
do
	read -p "Please enter a valid directory name: " startDir
	#echo "$startDir"
done

testvar=`find $startDir -type f -size +100c` 
clear
echo "$testvar" 2>&1 > cscd240lab4output1.txt
	










