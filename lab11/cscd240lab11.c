//Jaime Williams
//CSCD240 Lab11
//Due 11/11/2013
/*
Program does not draw edge or circle.
Program does differentiate between -e and -c but does not prompt in case of error.
Program sets variables for writing to newSmallFile.pgm.
Program reads in *.pgm file, gets magic #, comment, rows, cols, intensity, and builds 2d dynamic array,
then program  writes information to newSmallFile.pgm.
I could not figure out logic for manipulating edge and ran out of time for attempting circle.
Valgrind of file seems to be leaking like a sieve, not sure what and where to close but suspect int ** pixels.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cscd240lab11.h"

const int MAX = 100;

int main(int argc, char *argv[]){

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
		}
		else if (!strcmp(argv[i],"-c")){
			circleCenterRow = (int)strtol(argv[++i], NULL, 10);
			circleCenterCol = (int)strtol(argv[++i], NULL, 10);
			radius = (int)strtol(argv[++i], NULL, 10);
		}	
	}//end for
	
	fin = openFile(argc, argv);
	readMagic(fin, magic);
	readComment(fin, comment);

	cols = readCols(fin, cols);
	rows = readRows(fin, rows);
	intensity = readIntensity(fin, intensity);
	pixels = fillArray( rows, cols, fin);

	if(fin != NULL)
		fclose(fin);

	fout = openOutFile(argc, argv);
	writeOutFile(fout, pixels, magic, comment, rows, cols, intensity);

	if(fout != NULL)
		fclose(fout);

	void cleanUp(int ** pixels);

	printf("");
	return 0;
}//end main