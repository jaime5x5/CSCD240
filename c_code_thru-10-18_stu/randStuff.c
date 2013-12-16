#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//const int MAX=100;
//#define MAXIMUM 100

int main()
{
	
	srand(time(NULL));
	int x;
	for(x = 1; x < MAXIMUM; x++)
		printf("%d  ", rand()%100);

	printf("\n");


}// end main

