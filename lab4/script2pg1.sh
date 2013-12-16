#!/bin/bash
read -p "Enter a number " num

(( Double = $num * 2 ))
echo "Twice the number is $Double"

(( DoublePlus1 = 2 * $num + 1 ))
echo "Twice the number plus 1 is $DoublePlus1"

(( DoubleQPLus1 = 2 * ( $num + 1 )))
echo "Twice the quantity (number plus 1) is $DoubleQPLus1"
