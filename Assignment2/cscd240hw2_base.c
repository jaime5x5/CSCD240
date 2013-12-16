#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define ROWS 300
#define COLS 100

int findMinIndex(int arr[], int index[], int fromIndex, int toIndex);
void showSortedArr(int original[ROWS][COLS], int sortedIndexArray[COLS][ROWS]);

int main(int argc, char *argv[]){

	int buf = 0, /* Ints read in from file, reused for max index when sorting */
		temp = 0, /* Used for swapping array values */
		i = 0, j = 0; /* Counters */
	int row, col;
	int myData[ROWS][COLS], /* Original array read in */
		keyIndex[COLS][ROWS]; /* Array of array indices */
	int tempCol[ROWS];


	scanf("%d %d",&row, &col);

	for(i = 0; i < ROWS; i++){
		for(j = 0; j < COLS; j++){
			scanf("%d ", &buf);
			myData[i][j] = buf;
			keyIndex[j][i] = i;
		}
	}

	for(i =0;i<COLS;i++) {
		for(j = 0; j < ROWS; j++){
			tempCol[j] = myData[j][i];
		}

		// Sort input array using keyindex array
		for( j = 0; j < ROWS; j++ ){
			buf = findMinIndex( tempCol, keyIndex[i], j, ROWS - 1 );
			// Swap value at index i with value at index buf
			temp = keyIndex[i][j];
			keyIndex[i][j] = keyIndex[i][buf];
			keyIndex[i][buf] = temp;
		}
	}

	showSortedArr(myData, keyIndex);

	// Cleanup and exit	
	return 0;
}

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
}

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
}
