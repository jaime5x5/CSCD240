!#/bin/bash
read -p "Enter 'yes' or 'no': " YN
Lower_YN=`echo $YN | tr [:upper:] [:lower:]`
if [[ "x$Lower_YN" = "xy" ]] ; then
	echo "You specified yes"
else
	echo "You did not specify yes"
fi