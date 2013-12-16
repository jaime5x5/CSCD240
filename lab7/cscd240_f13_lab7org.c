//Jaime Williams
//CSCD240 lab7 Number Guessing Game function breakout
//Due 10/24/2013

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

// put your prototypes here
void printWelcome();
int readNum();//must be greater than 99
void readName(char * name);//one word	
int generateNum(int theNum, int max);//generates theNum
int readGuess(int max);
int checkGuess(int guess, int theNum, int attempts);// if loop (high, low)
int goAgain();// y or n

//result is a boolean

// You may NOT change anything from here to

#define LIMIT 15 // Maximum number of trys user can perform
#define MIN 99 // User must guess an number greater than 99

int main()
{
	srand(time(NULL));

	char name[100];
	int attempts, result;
	int max, theNum, guess;

	do 
	{	
		printWelcome();						// 1
		attempts = 0;
		max = readNum();					// 2 
		readName(name);						// 3
		theNum = generateNum(1, max);	// 4

		do
		{
			guess = readGuess(max);			// 5
			attempts ++;
			result = checkGuess(guess, theNum, attempts);	// 6
			
		}while(result && attempts < LIMIT);

	}while(goAgain()); 						// 7
	
	return 0;

} // end main
// put your functions here
int checkGuess(int guess, int theNum, int attempts){
	int test = 1;

	if(attempts >= LIMIT){
		printf("You have exceeded %d  at %d attempts\n", LIMIT, attempts);
		test = 0;
	} else {
		if(guess > theNum){
			printf("Sorry that number is too High\n");
    		printf("You are at %d attempts\n", attempts);
		}
		
    	else if(guess < theNum){
    		printf("Sorry that number is too Low\n");
    		printf("You are at %d attempts\n", attempts);
    	}
			
		else {
			printf("You got it :) :)\n");
			printf("Good job, you guessed the number in only %d attempts\n", attempts);
			test = 0;
		}
	}

	return test;
}//end checkGuess

int generateNum(int theNum, int max){	
	int randNum = rand() % max + theNum; //
	//printf("The num is %d\n", randNum );

	return randNum;
}//end generateNum
 
int goAgain(){

	char goAgainReply = 0;
	int test2 = 0;
	fflush(stdin);
	printf("Would you like to try again? \n");
	scanf(" %c", &goAgainReply);

	if (goAgainReply == 'y')
		test2 = 1;

	return test2;
}//end goAgain

void printWelcome(){

	printf("Aloha, you are playing the Number Guessing Game: \n");

}//end printWelcome

int readGuess(int max){

	int temp = 0;
	printf("Please enter a number less than %d\n", max);
	scanf(" %d", &temp);

	if(max < temp){
		printf("Please enter a number less than %d\n", max);
		scanf(" %d", &temp);
	}
	return temp;
}//end readGuess

void readName(char * name){
	printf("Please enter name: ");
	scanf(" %s", name);
}//end readName

int readNum(){
	int result = 0;

	printf("Please enter a number greater than 99: \n");
	scanf(" %d", &result);
	if (result <= MIN){
		printf("You did not enter a number greater than 99, Please try again: \n");
		scanf(" %d", &result);
	}
	return result;
}//end readNum
































