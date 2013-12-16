#include <stdio.h>
#include <stdlib.h>

void fillArray(int array[], int length);

void copyArray(int array[],int * copy, int length);

int main(){
		int array[5];
		int copy[5];

		printf("main: %lu\n", sizeof(array));

		fillArray(array, 5);
		//copyArray(array,copy,5);


}

	void fillArray(int array[], int length){
		int i;
		for(i = 1; i < length + 1; i++){
			array[i] = 10 * i;
			printf("array[i] %d\n", array[i]);
		}
		printf("array[1] %d\n", array[1]);
		printf("array[2] %d\n", array[2]);
		printf("array[3] %d\n", array[3]);
		printf("array[4] %d\n", array[4]);
		printf("array[5] %d\n", array[5]);
	}
//rand()%(high-low + 1) + low
//void name(char name[])
// char goAgain
// printf("go again y/n", );
// scanf("%c", &goAgain);
// goAgain = tolower(goAgain);

// man 3 string.

// int array[5] = {10,20,30,40,50};
// char name[10];
// readName(name, 10); //if fgets
// readName fgets(name, 10);
// int arrayCopy[5];



// void readName fgets(char name[], int max){
// 	printf("%s\n", );
// 	fgets();
// }

// fillArray(array, 5);






























