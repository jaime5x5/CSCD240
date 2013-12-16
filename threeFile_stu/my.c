#include "my.h"


int readVal()
{
	int num;
	printf("please enter a number greater than zero and less than %d ", MAX);
	scanf("%d", &num);

	while(num < 1 || num > MAX)
	{
		printf("please enter a number greater than zero and less than %d ", MAX);
		scanf("%d", &num);

	}// end while

	return num;

}

void fillArray(int array[], int length)
{
	int x;
	for(x = 0; x < length; x++)
	{
		printf("Please enter a value ");
		scanf("%d", &array[x]);
	}// end for

}


void printArray(int length, int array[])
{
	int x;
	for(x = 0; x < length; x++)
	{
		printf("array[%d]: %d\n", x, array[x]);
	}// end for

}