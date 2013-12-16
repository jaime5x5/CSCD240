//Jaime Williams
//CSCD240 lab5 Number Guessing Game
//Due 10/19/2013

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int MAX=100;
const int MAXTRY=15;

#define MAXIMUM 100

int main() {

	int theNum, guess, seed;
	static int attempts;
	char goAgain;
	char name[MAX];//buffer overflow vulnerability.

	guess = 0;
	goAgain = 'y';
	attempts = 0;

	while (goAgain == 'y'){
		while(seed < MAX){
			printf("Please enter a number greater than 99: \n");
			scanf("%d", &seed);
			srand(time(NULL));
			theNum = rand()/seed%100;    
		}//end while (validates number).

		printf("please enter name: ");
		scanf("%s", name); //scanf by default stops on whitespace.
		printf("Welcome to the number guess game. %s\n", name);
		printf("\n");

	
			while(goAgain == 'y'){

			printf("%s please enter a number less than 100: \n", name);
			scanf("%d", &guess);

			if(guess > theNum){
				printf("Sorry %s that number is too High\n", name);
		    	if (attempts < MAXTRY)
		    		attempts++;
		    	else {
		    		printf("you have exceeded %d attempts\n", MAXTRY);
		    		break;
		    	}
		    	if (attempts < MAXTRY){
			    	printf("%s are at %d attempts\n", name, attempts);
					printf("Would you like to try again? (y/n): \n");
					scanf("%s", &goAgain);
		    	}
			}
				
		    else if(guess < theNum){
		    	printf("Sorry %s that number is too Low\n", name);
		    	if (attempts < MAXTRY)
		    		attempts++;
		    	else {
		    		printf("you have exceeded %d attempts\n", MAXTRY);
		    		break;
		    	}
		    	if (attempts < MAXTRY){
			    	printf("%s are at %d attempts\n", name, attempts);
					printf("Would you like to try again? (y/n): \n");
					scanf("%s", &goAgain);
		    	}
		    }
				
			else {
				printf("%s you got it :) :)\n", name);
				attempts++;
				printf("%s good job, you guessed the number in only %d attempts\n", name, attempts);
				break;
			}
		}//end inner while (try again option).

		printf("Would you like to play the Number Guessing Game again? (y/n): \n");
		scanf("%s", &goAgain);

		if (goAgain == 'y'){
			attempts = 0;
			seed = 0;
		}//resets for new game.
	}//end outter while (game again option).
	    
	theNum = 0;

	return 0;
}//end main
