//Jaime Williams
//CSCD240 lab6 Read file, do math (stats),
//redirect in and out.
//Due 10/21/2013

#include <stdio.h>
#include <stdlib.h>


int main() {
   
   int rows, cols, i, countLow, countHigh, countMed;
   float max = 0.00;
   float min = 0xFFFFFF;
   float temp, avg, sum;

  	scanf("%d%d", &rows, &cols);

   	int count = rows * cols;

	for(i=0; i< count; i++) {
		
		scanf("%f,", &temp);
		sum = sum + temp;

		if(0.00 <= temp && temp <= 30.00){
			if (temp < min){
				min = temp;
			}
			countLow++;
		}
		else if (30.00 < temp && temp <= 90.00){
				countMed++;
		}				
		else if (temp > 90.00){
			if (temp > max){
				max = temp;
			}
			countHigh++;
		}	
	}//end for

	avg = sum/count;

	printf("\n");
	printf("0<=data<=30\t 30<data<=90\t data>90   Max is\t Min is\t Avg is\n");
	printf("%d%18d%15d%10.2f%13.2f%9.2f\n", countLow, countMed, countHigh, max, min, avg);			
	printf("\n");
	
	return 0;
}//end main
