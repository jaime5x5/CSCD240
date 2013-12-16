#!/bin/bash
x=0
until [[ $x -gt 10 ]]
do
	echo $x
	((x++))
done
