//Jaime Williams
//CSCD240 Lab14
//Due 11/21/2013

#ifndef LAB14_H
#define LAB14_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

extern const int INTS;
extern const int CHARS;

//prototypes
void printIntArray(int * intArray);
void printCharArray(char * charArray);
int compareToInts(const void * a, const void * b);
int compareToChars(const void * a, const void * b);
#endif