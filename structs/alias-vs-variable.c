#include <stdio.h>

struct date{
	int month;
	int day;
	int year;
}today;

typedef struct date Date;

typedef struct {int month;int day;int year:}Date;

int main(){
	struct date today;

	today.month = 11;
	today.year = 2013;

	printf("Please enter day ");
	scanf("%d", &today.day);

	printf("The date is: %d/%d/%d\n", today.month, today.day, today.year);

	return 0;
}