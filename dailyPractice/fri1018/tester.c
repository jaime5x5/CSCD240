#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main(int arc, chr * argv[]) similar to java main statment
int main()
{
	char name [100]; //static array content in [] must be a constant.
	int num1, num2;
	printf("test");
	//fprintf(stdout,"test");(fileName,"info to print")

	scanf("%d", &num1); //%d = int &num1 memmory address operator.
    scanf("%d%d", &num1, &num2);


	return 0;
}//end main