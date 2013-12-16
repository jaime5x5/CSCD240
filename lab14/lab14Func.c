//Jaime Williams
//CSCD240 Lab14
//Due 11/21/2013

#include "lab14.h"

void printIntArray(int * intArray){
	int x;

	for (x = 0; x < 30; x++)
	{
		if(x == 0)
			printf("[ %d, ", intArray[x] );
		else if (x == 29)
			printf("%d ] ", intArray[x] );
		else
			printf("%d, ", intArray[x] );
	}
}//end printIntArray

void printCharArray(char * charArray){
	int x;

	for (x = 0; x < 20; x++)
	{
		if (x == 0)
			printf("[ %c, ", charArray[x] );
		else if (x == 19)
			printf("%c ] ", charArray[x] );
		else
			printf("%c, ", charArray[x] );
	}

}//end printCharArray

int compareToInts(const void * a, const void * b){

	return ( *(int*)a - *(int*)b );
}//end compareToInts

int compareToChars(const void * a, const void * b){

	return ( *(char*)a - *(char*)b );
}//end compareToInts







