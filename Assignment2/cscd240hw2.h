//Jaime Williams
//CSCD240 Assignment 2
//Due 11/3/2013

#ifndef CSCD240HW2_H
#define CSCD240HW2_H
#define ROWS 300
#define COLS 100

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"cscd240hw2.h"



// put your prototypes here
int findMinIndex(int arr[], int index[], int fromIndex, int toIndex);
void showSortedArr(int original[ROWS][COLS], int sortedIndexArray[COLS][ROWS]);

#endif