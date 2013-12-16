#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int findMax( int arr[], int fromIndex, int toIndex );
int findMin( int arr[], int fromIndex, int toIndex );
void foo( int old[], int new[], int size );
void showArr( int a[], int size);

int main() 
{
	int i, j, maxInd, temp;
	int a[] = { 3, 1, -1, 5, 9, 0, 12, 2, 4, 7};
	int size = sizeof(a) / sizeof(a[1]);
	int new[size];
	foo( a, new, size );
	
	printf("The original array are: \n");
	showArr( a, size );
	printf("The new array are: \n");
	showArr( new, size );
}

void showArr( int a[], int size )
{
	for( int i = 0; i < size; i ++ )
		printf("%d  ", a[i]);
	
	printf("\n");
} 


//
int findMax( int arr[], int fromIndex, int toIndex )
{
	int maxInd = 0;
	int maxNum = INT_MIN;

	for( int i = fromIndex; i <= toIndex; i ++ )
	{
		if( arr[i] > maxNum )
		{
			maxNum = arr[i];
			maxInd = i;
		}	
	}
	return maxInd;	
}

int findMin( int arr[], int fromIndex, int toIndex )
{
        int minInd = 0;
        int minNum = INT_MAX;

        for( int i = fromIndex; i <= toIndex; i ++ )
        {
                if( arr[i] < minNum )
                {
                        minNum = arr[i];
                        minInd = i;
                }
        }
        return minInd;
}

void foo( int old[], int new[], int size )
{
	int i, temp, maxInd = 0;
	for( i = 0; i < size; i ++ )
	{
		new[i] = old[i];
	}

	for( i = 0; i < size; i ++ )
        {
                maxInd = findMax( new, i, size - 1 );
		//
                temp = new[i];
                new[i] = new[maxInd];
                new[maxInd] = temp;
        }
}
