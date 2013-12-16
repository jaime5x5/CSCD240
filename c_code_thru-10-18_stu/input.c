#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num, num1;
	char ltr, ltr2;
	double num2, num3;
	char name[100];
	/*printf("Please enter  2 numbers ");
	scanf("%i%d", &num, &num1);
	//fscanf(stdin, "%d", &num1);
	while(fgetc(stdin) != '\n') ;
	printf("Nums be: %d and %d\n", num, num1);

	printf("go again (y/n) ");
	scanf("%c", &ltr);
	while(fgetc(stdin) != '\n');
	printf("ltr is %c\n", ltr);

	printf("enter another char ");
	scanf("%c", &ltr2);

	if(ltr == ltr2)
		printf("same\n");
	else
		printf("not same\n");
*/
	printf("Please enter 2 doubles comma separated ");
	scanf("%lf , %lf", &num2, &num3);
	printf("num2 is %.10lf num3 is %lf\n", num2, num3);
	

	printf("please enter your name ");
	scanf("%s", name);
	printf("your name is %s\n", name);
/*	printf("enter a number ");
	scanf("%d", &num);
	printf("You entered %d\n", num);
*/	return 0;

}// end main

