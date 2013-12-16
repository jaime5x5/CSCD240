!#/bin/bash

read -p "Please enter a number " num1
read -p "Please enter another number " num2
echo "You entered $num1 and $num2"
result=$(( num1 + num2 ))
result2=`expr $num2 - $num1`
echo "The 2 numbers added is $result"
echo "The 2 numbers subtracted is $result2"