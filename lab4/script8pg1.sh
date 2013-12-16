#!/bin/bash
read -p "Enter 'yes' or 'no': " YN
if [[ "x$YN" = "xy" ]] || [[ "x$YN" = "xY" ]] ; then
	echo "You specified yes"
else
	echo "You did not specify yes"
fi