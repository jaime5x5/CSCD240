#!/bin/bash
read -p "enter 2 numbers " num1 num2

result=$(( NUM1 * 2 ))
echo "Result is $result"

result2=$(( num1 * num2 ))
echo "Result2 is $result2"

(( result3 = $num1 * 2 ))
echo "Result3 is $result3"
