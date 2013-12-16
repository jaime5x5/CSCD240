//Jaime Williams
//CSCD240 Lab11
//Due 11/11/2013

#ifndef CSCD240LAB10_H
#define CSCD240LAB10_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cscd240lab11.h"

extern const int MAX;

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
void cleanUp(int ** temps);
#endif