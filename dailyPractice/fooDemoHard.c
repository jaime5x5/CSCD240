#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


int findMaxIndex( int arr[],int index[], int fromIndex, int toIndex );
void foo( int oldArr[], int newArr[], int size );
void showArr( int a[], int size);
void showArr2( int a[],int *index, int size );

int main() 
{
	int i, j, maxInd, temp;
	int a[] = { 3, 1, -1, 5, 9, 0, 12, 2, 4, 7};
	int size = sizeof(a) / sizeof(a[1]);
	
	// Dynamically allocate array keyIndex, of size integers
	int *keyIndex = (int *) malloc(size * sizeof(int));

	for( i = 0; i < size; i ++ )
		keyIndex[i] = i;

	for( i = 0; i < size; i ++ )
	{
		maxInd = findMaxIndex( a, keyIndex, i, size - 1 );

		temp = keyIndex[i];
		keyIndex[i] = keyIndex[maxInd];
		keyIndex[maxInd] = temp;

		//showArr( keyIndex, size );
	} 
	printf("The old array is : \n");
	showArr( a, size );
	printf("The new array is : \n");
	showArr2( a, keyIndex, size );
}

void showArr( int a[], int size )
{
	for( int i = 0; i < size; i ++ )
		printf("%d  ", a[i]);
	
	printf("\n");
} 
//
void showArr2( int a[],int *index, int size )
{
        for( int i = 0; i < size; i ++ )
                printf("%d  ", a[index[i]]);

        printf("\n");
}

//formal argument of findMax function
int findMaxIndex( int arr[], int index[], int fromIndex, int toIndex )
{
	int maxInd = 0;
	int maxNum = INT_MIN;

	for( int i = fromIndex; i <= toIndex; i ++ )
	{
		if( arr[index[i]] > maxNum )
		{
			maxNum = arr[index[i]];
			maxInd = i;
		}	
	}
	return maxInd;	
}


