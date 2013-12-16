#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int MAX=100;

#define MAXIMUM 100

int main()
{
	printf("Please enter a number greater than 99");
	int x = scanf(%d);
	printf(x);
	
	srand(time(NULL));
	int x;
	for(x = 1; x < 100; x++)
		printf("%d ", rand()%100);
	printf("\n");


	return 0;

}//end main