//Jaime Williams
//CSCD240 Assignment 2
//Due 11/3/2013
/*
What a challenge. 
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"cscd240hw2.h"

#define ROWS 300
#define COLS 100

int main(int argc, char *argv[]){

	int buf = 0, temp = 0,i = 0, j = 0; 
	int row, col;
	int myData[ROWS][COLS],keyIndex[COLS][ROWS]; 
	int tempCol[ROWS];

	scanf("%d %d",&row, &col);

	for(i = 0; i < ROWS; i++){
		for(j = 0; j < COLS; j++){
			scanf("%d ", &buf);
			myData[i][j] = buf;
			keyIndex[j][i] = i;
		}
	}//builds arrays

	for(i =0;i<COLS;i++) {
		for(j = 0; j < ROWS; j++){
			tempCol[j] = myData[j][i];
		}//temp array

		for( j = 0; j < ROWS; j++ ){
			buf = findMinIndex( tempCol, keyIndex[i], j, ROWS - 1 );
			temp = keyIndex[i][j];
			keyIndex[i][j] = keyIndex[i][buf];
			keyIndex[i][buf] = temp;
		}//swaps index based on value @ index
	}

	showSortedArr(myData, keyIndex);

	return 0;
}