//Jaime Williams
//CSCD240 Lab11
//Due 11/11/2013
/*

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cscd240lab11.h"

const int MAX = 100;

//prototypes
FILE * openFile(int argc, char * argv[]);
char * getOperation(int argc, char * argv[]);
int getEdgeWidth(int argc, char * argv[]);
void readMagic(FILE * fin, char magic[3]);
void readComment(FILE * fin, char comment[MAX]);
int readRows(FILE * fin, int rows);
int readCols(FILE * fin, int cols);
int readIntensity(FILE * fin, int intensity);
int ** fillArray(int rows, int cols, FILE * fin);
FILE * openOutFile(int argc, char * argv[]);
void writeOutFile(FILE * fout, 
				  int ** pixels,
				  char magic[3], 
				  char comment[MAX], 
				  int rows, 
				  int cols, 
				  int intensity);


int main(int argc, char *argv[])
{
	//vars go here
	FILE * fin = NULL;
	FILE * fout = NULL;
	int edge = 0;
	int circleCenterRow = 0;
	int circleCenterCol = 0;
	int radius = 0;
	int i;
	int rows = 0;
	int cols = 0;
	int intensity = 0;
	char magic[3];
	char comment[MAX];
	int ** pixels;

	for (i = 1; i < argc; i++){
		if (!strcmp(argv[i],"-e")){
			edge = (int)strtol(argv[++i], NULL, 10);
			// printf("%d\n", edge);
		}
		else if (!strcmp(argv[i],"-c")){
			circleCenterRow = (int)strtol(argv[++i], NULL, 10);
			circleCenterCol = (int)strtol(argv[++i], NULL, 10);
			radius = (int)strtol(argv[++i], NULL, 10);
			// printf("%d\n", circleCenterRow);
			// printf("%d\n", circleCenterCol);
			// printf("%d\n", radius);
		}	
	}//end for

	// i = 1;
	// if (!strcmp(argv[i],"-e")|| !strcmp(argv[i], "-c"))
	// 	printf("You must enter a valid operation\n");
	
	fin = openFile(argc, argv);
	readMagic(fin, magic);
	// printf("%s\n", magic);
	readComment(fin, comment);
	// printf("%s\n", comment);

	cols = readCols(fin, cols);
	// printf("%d\n", cols);
	rows = readRows(fin, rows);
	// printf("%d\n", rows);
	intensity = readIntensity(fin, intensity);
	// printf("%d\n", intensity);
	pixels = fillArray( rows, cols, fin);

	fout = openOutFile(argc, argv);
	writeOutFile(fout, pixels, magic, comment, rows, cols, intensity);

	printf("");
	return 0;
}//end main

//functions
FILE * openFile(int argc, char * argv[]){
	FILE *fp = NULL;
	//printf("argc = %d\n", argc );
	fp = fopen(argv[argc - 2], "r");
	if(fp == NULL)
		printf("File is closed.\n");
	// printf("%s\n", argv[argc - 2] );
	return fp;
}//end openFile

FILE * openOutFile(int argc, char * argv[]){
	FILE *fp = NULL;
	//printf("argc = %d\n", argc );
	fp = fopen(argv[argc - 1], "w");
	if(fp == NULL)
		printf("File is closed.\n");
	// printf("%s\n", argv[argc - 1] );
	return fp;
}//end openOutFile

void readMagic(FILE * fin, char magic[3]){
	
	fscanf(fin,"%s", magic);

}//end readMagic

void readComment(FILE * fin, char comment[MAX]){
	
	fscanf(fin,"%s", comment);
	// printf("%s\n", comment );
	fscanf(fin,"%s", comment);
	// printf("%s\n", comment );

}//end readComment

int readRows(FILE * fin, int rows){
	
	fscanf(fin,"%d", &rows);
	// printf("%d\n", rows );
	return rows;

}//end readRows

int readCols(FILE * fin, int cols){
	
	fscanf(fin,"%d", &cols);
	// printf("%d\n", cols );
	return cols;

}//end readCols

int readIntensity(FILE * fin, int intensity){
	
	fscanf(fin,"%d", &intensity);
	// printf("%d\n", intensity );
	return intensity;

}//end readIntensity

int ** fillArray(int rows, int cols, FILE * fin){
	int  x, y = 0;
	int num = 0;
	int ** ara = NULL;

	if (rows == 0){
		perror("This to say it is broken.");
		exit(-1);
	}
	
	ara = (int **)calloc(rows, sizeof(int *));	

	for(x=0;x<rows;x++){
		ara[x] = (int *)calloc(cols, sizeof(int));
		for (y = 0; y < cols; y++){
			fscanf(fin,"%d ",&ara[x][y]);
			// printf("%d ", ara[x][y]);
		}
		// printf("\n");
	}//end for

	return ara;
}//end fillArray

void writeOutFile(FILE * fout, 
					int ** pixels, 
					char magic[3], 
					char comment[MAX], 
					int rows, 
					int cols, 
					int intensity){
	
	int x, y;

	fprintf(fout, "%s\n", magic);
	fprintf(fout, "# ");
	fprintf(fout, "%s\n", comment);
	fprintf(fout, "%d %d\n", rows, cols);
	fprintf(fout, "%d\n", intensity);

	for (x = 0; x < rows; x++){
		for (y = 0; y < cols; y++){
			fprintf(fout, "%d\t", pixels[x][y]);
		}
		fprintf(fout,"\n");
	}
}//end writeOutFile