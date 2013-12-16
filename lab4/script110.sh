#!/bin/bash
echo -n "Shall I clear the screen (Y/N)? > "
read yorn
if test $yorn = "Y" -o \
	$yorn = "y" -o \
	$yorn = "Yes" -o \
	$yorn = "yes" -o \
	$yorn = "Yup"
	then
	clear
elif test $yorn = "N" -o \
	$yorn = "n" -o \
	$yorn = "No" -o \
	$yorn = "no" -o \
	$yorn = "Nope"
	then
	echo "OK"
else
	echo "Please use Y or N. "
fi