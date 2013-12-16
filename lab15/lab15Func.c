//Jaime Williams
//CSCD240 Lab15
//Due 11/24/2013

#include "lab15.h"

extern const int MAXSTRING;


char * readString(char * theString){
	// int x;

	// for (x = 0; x < MAXSTRING; x++){
	// 		if (theString[x] != (int)NULL){		
	// 			theString[x] = (char)NULL;
	// 	}
	// }

	//printf("%s\n\n", theString);
	
	printf("When the program starts, the user is required\n"
	"to enter a string. It is guaranteed the user will enter\n"
	"at least one letter. The user can ultimately enter up to\n"
	"650 characters with words being delimitated by a period,\n"
	"comma or space.\n"
	"\n"
	"Please enter your string --> ");
	printf ("%s\n", theString);
	if ( fgets(theString, MAXSTRING, stdin) != NULL )
       printf ("%s\n", theString);

	return 	theString;
}//end readString

int menu(){
	int num = 0;
	printf("Welcome to the String Program.\n");
	printf("\n");
	printf("Please choose from the following: \n");
	printf("1) Enter a new string - allows the user to replace the current string.\n");
	printf("2) Parse the string and then write that string, word by word, to\n"
			"an output file.\n");
	printf("3) Read an existing output file and print the string to the screen, "
		   "and also displays the length of the maximum word.\n");
	printf("4) Quit.\n");
	printf("Your selection --> ");
	fscanf(stdin, "%d", &num);
	printf("\n");
	if(num > 0 && num < 5)
		return num;
	else {
		printf("Invalid entry please try again. \n\n");
		return menu();
	}
}//end menu