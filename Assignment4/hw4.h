//Jaime Williams
//CSCD240 Assignment 4
//Due 11/20/2013

#ifndef HW$_H
#define HW4_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//structs
typedef struct company {
	char * companyName;
	char * tickerSymbol;
}Company;

typedef struct stock {
	double purchasePrice;
	int sharesCount;
	struct company Company;
}Stock;
//prototypes

FILE * openInputFile();
void strip(char * ara);
int countRecords(FILE * fin, int total);
Stock * buildArray(FILE * fin, int total);
int menu();
// void printStockValue(Stock * array, int total);
// Stock * buyStock(Stock * array, int total);
// Stock * sellStock(Stock * total, int array);
// void printStockInfo(Stock * array, int total);
// void cleanUp(Stock * array, int total);

#endif