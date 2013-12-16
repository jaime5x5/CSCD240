//Jaime Williams CSCD240Lab9

#include <stdio.h>

//prototypes
void function1(int twod[][3], int rows, int cols);
void function2(int twod[][3], int rows, int cols);
void function3(int twod[], int rows, int cols);
void function4(int twod[], int rows, int cols);
void function5(int * twod, int rows, int cols);
void function6(int (*twod)[3], int rows, int cols);

int main()
{
	int twod[4][3] = { {0, 1, 2}, {10, 11, 12}, {20, 21, 22}, {30, 31, 32} };
	// NOTE: a 2D array is a double pointer so you have to derefernce the name
	// to be able to use a 1D pointer

	int *ptr = *twod;

	/* This gives us an idea of the memory map */
	printf("sizeof(ptr) %ld\n", sizeof(ptr) );
	printf("sizeof(twod[0]) %ld\n", sizeof(twod[0]) );
	printf("sizeof(twod[0][0]) %ld\n", sizeof(twod[0][0]) );
	printf("twod %p\n", twod);
	printf("ptr %p\n", ptr);
	printf("&twod[0] %p\n", &twod[0]);
	printf("&twod[0][0] %p\n", &twod[0][0]);
	printf("&twod[0][1] %p\n", &twod[0][1]);
	printf("&twod[0][2] %p\n", &twod[0][2]);
	printf("&twod[1] %p\n", &twod[1]);
	printf("&ptr %p\n", &ptr);
	/* end memory map */
	printf("twod + 3 is: %p\n", twod + 3);
	printf("*(*(twod + 1)) is: %d\n", *(*(twod + 1)));
	printf("*twod + 1 is: %p\n", *twod+1);
	printf("*twod[2] is: %d\n", *twod[2]);
	printf("*(twod + 2) + 2 is: %p\n", *(twod + 2) + 2);
	printf("twod[1] is: %p\n", twod[1]);
	printf("twod[1][2] is: %d\n", twod[1][2]);
	printf("ptr %p\n", ptr);
	printf("twod [1] %p\n", twod [1]);
	printf("ptr[1] %d\n", ptr[1]);
	printf("ptr + 1 %p\n", ptr + 1);
	printf("*(ptr + 1) %d\n", *(ptr + 1) );
	printf("twod + 1 %p\n", twod+1);
	printf("*twod + 1 %p\n", *twod + 1);
	printf("ptr[8] %d\n", ptr[8]);
	function1(twod, 4,3);
	function2(twod, 4,3);
	function3(twod[0], 4,3);
	function4(twod[0], 4,3);
	function5(twod[0], 4,3);
	function6(twod, 4,3);

	return 0;
}// end main

//functions
void function1(int twod[][3], int rows, int cols){
	int i;
	int j;
	int temp;
	printf("function1 \n");
	for(i = 0; i < rows; i++){
		for (j = 0; j < cols; j++){
			temp = twod[i][j];
			printf(" %d", temp);
		}
		printf(" \n");
	}
	printf(" \n");
}//end function1

void function2(int twod[][3], int rows, int cols){
	int i;
	int j;
	int temp;
	printf("function2 \n");
	for(i = 0; i < rows; i++){
		for (j = cols - 1; j >= 0; j--){
			temp = twod[i][j];
			printf(" %d", temp);
		}
		printf(" \n");
	}
	printf(" \n");
}//end function2

void function3(int twod[], int rows, int cols){
	int i;
	int j;
	int temp;
	printf("function3 \n");
	for(i = 0; i < rows; i++){
		for (j = 0; j < cols; j++){
			temp = twod[i * cols + j];
			printf(" %d", temp);
		}
		printf(" \n");
	}
	printf(" \n");
}//end function3

void function4(int twod[], int rows, int cols){
	int i;
	int j;
	int temp;
	printf("function4 \n");
	for(i = 0; i < rows; i++){
		for (j = cols - 1; j >= 0; j--){
			temp = twod[i * cols + j];
			printf(" %d", temp);
		}
		printf(" \n");
	}
	printf(" \n");
}//end function4

void function5(int * twod, int rows, int cols){
	int i;
	int j;
	int temp;
	printf("function5 \n");
	for(i = 0; i < rows; i++){
		for (j = cols - 1; j >= 0; j--){
			temp = twod[i * cols + j];
			printf(" %d", temp);
		}
		printf(" \n");
	}
	printf(" \n");
}//end function5

void function6(int (*twod)[3], int rows, int cols){
	int i;
	int j;
	int temp;
	printf("function6 \n");
	for(i = 0; i < rows; i++){
		for (j = 0; j < cols; j++){
			temp = twod[i][j];
			printf(" %d", temp);
		}
		printf(" \n");
	}
	printf(" \n");
}//end function6