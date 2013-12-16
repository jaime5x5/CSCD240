#!/bin/bash
echo -n "Shall I clear the screen (Y/N)? "
read yorn
case $yorn in
Y|y|Yes|yes|Yup) clear;;
N|n|No|no|Nope) echo OK;;
*) echo Gee, please use Y or N next time.
esac