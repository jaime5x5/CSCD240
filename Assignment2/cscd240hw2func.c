//Jaime Williams
//CSCD240 Assignment 2
//Due 11/3/2013

#include"cscd240hw2.h"

#define ROWS 300
#define COLS 100

// Finds the largest value in input array and returns it's index
int findMinIndex(int arr[], int index[], int fromIndex, int toIndex){
	int minInd = 0, i = 0, minNum = 2000000000;

	for( i = fromIndex; i <= toIndex; i ++ ){
		if( arr[index[i]] < minNum ){
			minNum = arr[index[i]];
			minInd = i;
		}	
	}
	return minInd;	
}//end findMinIndex

// Show sorted array
void showSortedArr(int original[ROWS][COLS], int sortedIndexArray[COLS][ROWS]){
	int i = 0, j = 0, num = 0;

	// printf("Sorted Array:\n");
	printf("%d %d\n", ROWS, COLS);

	for( i = 0; i < ROWS; i++ ){
		for( j = 0; j < COLS; j++ ){
			num = original[sortedIndexArray[j][i]][j];
			printf("%d ", num);
		}
		printf("\n");
	}
}//end showSortedArr