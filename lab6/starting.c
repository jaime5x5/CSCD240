//Jaime Williams
//CSCD240 lab6 Read file do math (stats)
//Due 10/21/2013

#include <stdio.h>
#include <stdlib.h>

const int XXX=100;

#define XXX 100

int main() {

	FILE *fp;
   
   int rows, cols, i, j, z; //
   float temp;
   float matrix[rows][cols];

   fp = fopen("cscd240lab6.txt", "r");

  	fscanf(fp, "%d%d", &rows, &cols);
   	printf("%d\n", rows);
   	printf("%d\n", cols);

	for(i=0; i< rows; i++) {
		for(j=0; j< cols; j++) {
			matrix[i][j] = fscanf(fp, "%f", temp);
			printf("%d\n%d\n", i, j);
		}
	}			

   // void rewind(FILE *fp);


	return 0;
}//end main
