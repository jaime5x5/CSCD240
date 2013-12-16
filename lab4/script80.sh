#!/bin/bash
if test $# -gt 0
	then
	if test -d $1
		then
		echo "$1 is a directory"
	fi

	if test -r $1
		then
		echo "$1 is readable"
	fi
fi