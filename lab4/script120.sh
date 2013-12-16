#!/bin/bash
if [ $# -le 0 ]
	then
	echo -n "enter a directory "
	read dir
	
	while test ! -d $dir
	do
		echo "That is not a directory"
		echo -n "enter a directory "
		read dir
	done
fi