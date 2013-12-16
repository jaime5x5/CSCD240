//Jaime Williams
//CSCD240 Lab10
//Due 11/6/2013

#include "cscd240lab10.h"
extern const int MAX;

//functions
FILE * openFile(int argc, char * argv[]){
	FILE *fp = NULL;
	fp = fopen(argv[argc - 1], "r");
	if(fp == NULL)
		printf("File is closed.\n");
	return fp;
}//end openFile

int readMonth(FILE * fin){
	int buf = 0;
	
	if(fin == NULL)
		return 0;
	
	fscanf(fin,"%d", &buf);
	// printf("ReadMonth: %d", buf);
	return buf;
}//readMonth

int * fillArray(int month, FILE * fin){
	int count = 0, x, y = 0, swap = 0, position = 0;
	int num = 0;
	int * ara = NULL;
		
	while(!feof(fin)){
		fscanf(fin,"%d ",&num);
		count++;
	}
	if (count == 0){
		perror("this to say");
		exit(-1);
	}
	
	ara=(int *)calloc(count, sizeof(int));	
	
	rewind(fin);
	fscanf(fin,"%d ",&num);

	for(x=0;x<count;x++){
		fscanf(fin,"%d ",&ara[x]);
	}

	for ( x = 0 ; x < ( count - 1 ) ; x++ ){
	      position = x;
	 
	      for ( y = x + 1 ; y < count ; y++ ){
	         if ( ara[position] > ara[y] )
	            position = y;
	      }
	      if ( position != x ){
	         swap = ara[x];
	         ara[x] = ara[position];
	         ara[position] = swap;
	      }
	   }//end selection sort
	
	/*
	printf("Sorted:\n");
	for(x=0;x<count;x++){
		printf("%d\n", ara[x] );
	}
	*/
	return ara;
}//fillArray

int menu(){
	int num = 0;
	printf("Welcome to the Weather Program.\n");
	printf("\n");
	printf("Please choose from the following: \n");
	printf("1) Display the max temperature.\n");
	printf("2) Display the min temperature.\n");
	printf("3) Display the mean temperature for the month.\n");
	printf("4) Display the median temperature for the month.\n");
	printf("5) Display the mode temperature for the month.\n");
	printf("6) Load a new file.\n");
	printf("7) Quit.\n");
	printf("Your selection --> ");
	scanf("%d", &num);
	printf("\n");
	if(num > 0 && num < 8)
		return num;
	else {
		printf("Invalid entry please try again. \n\n");
		return menu();
	}

		

}//end menu
void displayMaxTemp(int * temps, int month){
	int count = 0;

	if(temps == NULL)
		return;
		
	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		count = 31;
	else if (month == 4 || month == 6 || month == 9 || month == 11)
		count = 30;
	else 
		count = 28;
	printf("The Max temperature is: %d\n", temps[count - 1]);
	printf("\n");
}//end displayMaxTemp

void displayMinTemp(int * temps, int month){
	int count = 0;

	if(temps == NULL)
		return;
		
	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		count = 31;
	else if (month == 4 || month == 6 || month == 9 || month == 11)
		count = 30;
	else 
		count = 28;
	printf("The Min temperature is: %d\n", temps[0]);
	printf("\n");
}//end displayMinTemp

void displayAvgTemp(int * temps, int month){
	int count = 0, i, num = 0, sum = 0, result = 0;

	if(temps == NULL)
		return;
		
	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		count = 31;
	else if (month == 4 || month == 6 || month == 9 || month == 11)
		count = 30;
	else 
		count = 28;
	for (i = 0; i < count; i++)
	{
		num = temps[i];
		sum = num + sum;
	}
	result = sum/count;
	printf("The Average temperature is: %d\n", result);
	printf("\n");

}//end displayAvgTemp

void displayMedianTemp(int * temps, int month){
	int count = 0, result = 0;

	if(temps == NULL)
		return;
		
	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		count = 31;
	else if (month == 4 || month == 6 || month == 9 || month == 11)
		count = 30;
	else 
		count = 28;

	result = count/2;

	printf("The Median temperature is: %d\n", temps[result]);
	printf("\n");

}//end displayMedianTemp

void displayModeTemp(int * temps, int month){

	int i, j, k=1, p = 0, temp[31], count = 0, counter=1, largest = 0;

	if(temps == NULL)
		return;
		
	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		count = 31;
	else if (month == 4 || month == 6 || month == 9 || month == 11)
		count = 30;
	else 
		count = 28;

	for(i=1; i<=count; i++){
		for(j=i+1;j<=count; j++){
			if(temps[i]==temps[j])
			counter++;
		}
		temp[k]=counter;
		k++;
		counter=1;
	}

	largest=temp[1];
	p=1; 
	for(i=2; i<=count; i++){
		if(largest<temp[i]){
			largest=temp[i];
			p=i;
		}
	}
	printf("The Mode is %d\n", temps[p]);
	printf("\n");
}//end displayModeTemp

void cleanUp(int * temps){
	if(temps != NULL){
		free(temps);
		temps = NULL;
	}
}//end cleanUp

void readFileName(char * fn){
	printf("Please enter a file name. -->");
	scanf("%s", fn);
}//end readFileName

FILE * openInputFile(char * fn){
	FILE *fp = NULL;
	fp = fopen(fn, "r");
	if(fp == NULL)
		printf("File is closed.\n");
	return fp;
}
