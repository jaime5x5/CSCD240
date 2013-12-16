//Jaime Williams
//CSCD240 Lab10
//Due 11/6/2013

#ifndef CSCD240LAB10_H
#define CSCD240LAB10_H

#include<stdio.h>
#include<stdlib.h>
#include"cscd240lab10.h"

extern const int MAX;

// put your prototypes here
FILE * openFile(int argc, char *argv[]);
int readMonth(FILE * fin);
int * fillArray(int month, FILE * fin);
int menu();
void displayMaxTemp(int * temps,  int month);
void displayMinTemp(int * temps,  int month);
void displayAvgTemp(int * temps,  int month);
void displayMedianTemp(int * temps,  int month);
void displayModeTemp(int * temps,  int month);
void cleanUp(int * temps);
void readFileName(char * fn);
FILE * openInputFile(char * fn);
#endif