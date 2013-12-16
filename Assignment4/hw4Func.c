//Jaime Williams
//CSCD240 Assignment 4
//Due 11/20/2013

#include "hw4.h"

//functions

FILE * openInputFile(){
	FILE * fp = NULL;
	char temp[100];

	printf("\nPlease enter a filename: " );
	fgets(temp, 100, stdin);
	strip(temp);
	fp = fopen(temp, "r");

	if(fp == NULL)
		printf("File is closed.\n\n");
	return fp;
}//end openFile

void strip(char * ara){
   int len = strlen(ara);
   int x = 0;
   while(x < len ){
      if(ara[x] == '\r')
         ara[x] = '\0';
      else if(ara[x] == '\n')
         ara[x] = '\0';
      x++;
   }
}//end strip

int countRecords(FILE * fin, int total){
  int count = 0;
  char line[100];
  while(!feof(fin)){
    fgets(line, 100, fin);
    count++;
  }
  count = count/total;
 return count;
}//end countRecords

Stock * buildArray( FILE * fin, int total){

	char string[100];
	int word = 0;
	int length = 0;
	int count = 0;
	Stock * array;

  	array = (Stock *)malloc(sizeof(Stock *));
  	array -> Company = *(Company *)malloc(sizeof(Company *));

  	rewind(fin);

	while(!feof(fin)){
		fgets(string, 100, fin);
		count++;
	}//gets line count

	rewind(fin);
	while(!feof(fin)){
		fscanf("%s", *Company->tickerSymbol);
	
  	printf("%d\n", count);

	return array;
}//end fillArray

int menu(){
	int num = 0;
	printf("\nWelcome to the E-Trade Program.\n");
	printf("\nPlease choose from the following: \n");
	printf("1) Print stock value.\n");
	printf("2) Buy stock.\n");
	printf("3) Sell stock.\n");
	printf("4) Print stock information.\n");
	printf("5) Quit.\n");
	printf("Your selection --> ");
	scanf("%d", &num);
	printf("\n");
	if(num > 0 && num < 6)
		return num;
	else {
		printf("Invalid entry please try again. \n\n");
		return menu();
	}
}//end menu

// void printStreetSortedArray(Address *array, int total){
// 	int x, y;
// 	Address tempAra[10];
// 	Address swap[10];

// 	for(x=0;x<total;x++){
//         tempAra[x] = array[x];
//  	}//loads temp

//     for ( x = 0 ; x < ( total - 1 ) ; x++ ){
//       for ( y = 0 ; y < total - x - 1; y++ ){
//          if ( tempAra[y].street[0] < tempAra[y + 1].street[0] ){
//              swap[y] = tempAra[y];
//              tempAra[y] = tempAra[y + 1];
//              tempAra[y + 1] = swap[y];
//         }
//       }
//     }//end sort
//     for (x = 0; x < total; x++){
//         printf("%s\n%s\n%s\n%d\n\n", tempAra[x].street, tempAra[x].city, tempAra[x].state, tempAra[x].zip);
//     }
// }//end street sort

// void printZipSortedArray(int total, Address *array){
// 	int x, y;
// 	Address tempAra[10];
// 	Address swap[10];

// 	for(x=0;x<total;x++){
//         tempAra[x] = array[x];
//  	}//loads temp

//     for ( x = 0 ; x < ( total - 1 ) ; x++ ){
//       for ( y = 0 ; y < total - x - 1; y++ ){
//          if ( tempAra[y].zip > tempAra[y + 1].zip ){
//              swap[y] = tempAra[y];
//              tempAra[y] = tempAra[y + 1];
//              tempAra[y + 1] = swap[y];
//         }
//       }
//     }//end sort

//     for (x = 0; x < total; x++){
//         printf("%s\n%s\n%s\n%d\n\n", tempAra[x].street, tempAra[x].city, tempAra[x].state, tempAra[x].zip);
//     }
// }//end zip sort
