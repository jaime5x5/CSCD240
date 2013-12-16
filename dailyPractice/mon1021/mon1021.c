//Jaime
//mon 10/21/13

//functions 2 things you need to do
// 1.) prototype
// 	function header w/ no body & a ;
// 		above main after #includes.

// 	look ahead -> tells the compiler when you see the function
// 	call you know where it is  @ in memory because the prototype
// 	is the loo a head.
// 2.) Function body will be below main.
// int main() {		//original program to parse into functions.

// int choice;

// 	do{

// 		printf("1) " );
// 		printf("2) " );
// 		printf("3) " );
// 		printf("5) " );
// 		scanf("%d", &choice);
// 	}while(choice != 4);
// }//end menu

#include <stdio.h>

int menu();

void doIt(int);

int main(){

	int choice;

	do {
		choice = menu();
	}while(choice != 4);
}//end main

int menu(){

	int choice;

	do{

		printf("1) " );
		printf("2) " );
		printf("3) " );
		printf("5) " );
		scanf("%d", &choice);
	}while(choice != 4);
	scanf("%i", &choice);
	return choice;
}//end menu

void doIt(int choice){
	printf("I did it. \n");
}


















