#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int aint = 1;
	long along = 1L;
	long long  aLongLong = 1ULL; //LL
	float af = 1.0f;
	double ad = 1.0f;
	char achar = 'c';
	
	short ashort = 1;
	
	int intSize = sizeof(aint);
	int longSize = sizeof(along);
	int floatSize = sizeof(float);
	int doubleSize = sizeof(double);
	int shortSize = sizeof(ashort);
	int charSize = sizeof(achar);
	int longLongSize = sizeof(aLongLong);
	
	printf("The size of Integer is: %d. Long size is %d. A LongLong size is %d.\n", intSize, longSize, longLongSize);
	printf("The size of Float is: %d. Double size is %d.\n", floatSize, doubleSize);
	printf("The size of Short Integer is: %d. Character size is %d.\n", shortSize, charSize);
	
	int addrAint = &(aint);
	printf("Address of variable aint is %x.\n", addrAint);
}
