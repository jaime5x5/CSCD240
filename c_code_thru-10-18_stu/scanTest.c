#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int i, j, k, m, n;
	char name[100];
	printf("Please read three numbers separated by space:\n");
	scanf("%d %d %d", &i, &j, &k);//dilimiter must be white space, number does
				      //NOT matter in this case.
	printf("You input i = %d, j=%d, k=%d\n", i, j, k);
        printf("input a string:\n");
	scanf("%s",name);
	printf("You input your name is:%s\n",name);// a while space terminate inputing
						   // can NOT grab the part after space
	fflush(stdin);	
	double a, b, c;
	int d;
	printf("Please input double, double, integer numbers:\n");
	scanf("%lf,%lf,%d", &a, &b, &d);//dilimiter must be comma, number of space after comma does
                                      //NOT matter in this case.
	printf("You input a=%f, b=%f, d=%d\n", a, b, d);
   

}
