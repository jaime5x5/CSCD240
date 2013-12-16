#include <stdio.h>
#include <stdlib.h>


int main()
{
	int num, num1,x;
	char ltr, ltr2;

	printf("Enter a num ");
	scanf("%i", &num);

	if(num == 0)
		printf("okay\n");

	else
		printf("not okay\n");

	for(x = 0; x < 5; x++)
		printf("x is %d\n", x);

	return 0;

}// end main

