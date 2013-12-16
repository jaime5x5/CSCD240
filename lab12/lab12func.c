//Jaime Williams
//CSCD240 Lab11
//Due 11/14/2013

#include "lab12.h"

//functions

FILE * openFile(){
	FILE * fp = NULL;
	char temp[100];

	printf("Please enter a filename: " );
	fgets(temp, 100, stdin);
	strip(temp);
	fp = fopen(temp, "r");

	if(fp == NULL)
		printf("File is closed.\n");
	// printf("%s\n", argv[argc - 2] );
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

int fillArray( Address *array, FILE * fin){

	char line[100];
	int count = 0;
	int linelength = 0;
	char * tempStreet;
	char * tempCity;
	char * tempState;
	int * tempZip;

	while(!feof(fin)){
		fgets(line, 100, fin);
		// printf("%s\n", line );
		count++;
	}
		if (count == 0){
		perror("Something is broken!");
		exit(-1);
	}

	rewind(fin);
	fgets(line, 100, fin);
	linelength = strlen(line);
	printf("%d\n", linelength);	
	tempStreet = (char *)calloc(strlen(line), sizeof(char *));
	// printf("%s\n", line);
	strncpy(tempStreet, line, strlen(line)-1);	
	// strncpy(tempStreet, array -> street, strlen(line)+1);
	printf("%s\n", tempStreet);

	cleanUp(tempStreet, linelength);
	
	return count;
}//end fillArray

void cleanUp(char * array, int linelength){
	// int x = 0;
	// 	for(x = 0; x < linelength; x++){
	// 		if(array[x] != NULL){
	// 			free(array[x]);
	// 			array[x] = NULL;
	// 		}
	// 	}	
	if(array != NULL){
		free(array);
		array = NULL;
	}
}