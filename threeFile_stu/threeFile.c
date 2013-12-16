#include <stdio.h>
#include "my.h"


const int NUM = 200;



int main()
{
	int arr [MAX];
	int val;

	val = readVal();
	fillArray(arr, val);
	printArray(val, arr);


	return 0;

}// end main

