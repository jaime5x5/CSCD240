#!/bin/bash
echo "There are $# command line arguments"
if test $# -gt 0
	then
	echo "The arguments as one string are $*"
fi