//Jaime Williams
//CSCD240 Lab12
//Due 11/14/2013

#ifndef LAB12_H
#define LAB12_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab12.h"

//structs
typedef struct address {
	char street[100];
	char city[100];
	char state[3];
	int zip;
}Address;
//prototypes

FILE * openFile();
void strip(char * ara);
int fillArray(Address *array, FILE * fin);
void cleanUp(char * array, int linelength);


#endif