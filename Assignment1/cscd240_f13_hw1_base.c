//Jaime Williams
//CSCD240 Assignment 1
//Due 11/1/2013

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
//#include "myHeader.h"

// put your prototypes here
void introduction();
void readName(char * name);
void readWord(char * word);
int wordCharCount(char * word);
void wordIs(char * word, int wordLength);
char availableChoices(char *allLetters, char guess);
char readGuess(char * guess);
char modifyAvailable(char * allLetters, char guess);
char modifyWord(char * word, char guess, char * tempWord, int wordLength);
char initTempWord(char * tempWord);
int winCheck(char * word, char * tempWord, int attempts);
char inquirePlayAgain(char * playAgain);
char restoreAllLetters(char  allLetters[27]);



//CONSTANTS
#define LIMIT = 7			//max trys

//main
int main()
{
	int attempts = 0, wordLength, j;

	char word[100];
	char name[100];
	char player1[100];
	char player2[100];
	char allLetters[27] = "abcdefghijklmnopqrstuvwxyz";
	char guess = 0;
	char tempWord[100];
	char playAgain = 'y';

	do
	{
		introduction();
		readName(name);
		strcpy(player1, name);
		printf("%s ", player1);
		readWord(word);
		j = 0;
		while( word[j] ){
			word[j] = tolower(word[j]);
			j++;
		}
		printf("Player 2 ");
		readName(name);
		strcpy(player2, name);
		printf("\n");
		wordLength = wordCharCount(word);
		printf("Your word contains %i letters.\n", wordLength);
		wordIs(word, wordLength);
		availableChoices(allLetters, guess);
		initTempWord(tempWord);

		do{
			readGuess(&guess);
			guess = tolower(guess);
			modifyAvailable(allLetters, guess);
			attempts++;
			modifyWord(word, guess, tempWord, wordLength);
			attempts = winCheck(word, tempWord, attempts);
		}while(attempts < 7);
		restoreAllLetters(&allLetters[27]);
		inquirePlayAgain(&playAgain);
		putchar(tolower(playAgain));
		attempts = 0;
	}while(playAgain == 'y');

	return 0;

} // end main
// put your functions here

void introduction(){
	printf("Welcome to Hangman. The game is played in the following fashion:\n");
	printf("Player one enters their name (single name)  \n");
	printf("and then player one enters a single word for the other player to guess\n");
	printf("(There will be no spaces in the word).\n");
	printf("Player 2 then enters their name (single name).\n");
	printf("Player 2 has a maximum of 7 tries to guess the word.\n");
	printf("If player 2 guesses the word in 7 or less tries they win.  \n");
	printf("\n");

}

void readName(char * name){
	printf("Please enter name: ");
	scanf(" %s", name);
	printf("\n");
}//end readName

void readWord(char * word){
	printf("Please enter a word: ");
	scanf(" %s", word);
	
	printf("\n");
}//end readWord

int wordCharCount(char * word){
	return strlen(word);
}

void wordIs(char * word, int wordLength){
	int i;
	for (i = 0; i < wordLength; i++){
		printf("-");
	}
	printf(" \n");
}

char availableChoices(char * allLetters, char guess){
	int i;
	char temp[27] = "abcdefghijklmnopqrstuvwxyz";
	int result;

	
	if (guess == 0){
		printf("Available letters: ");
		for (i = 0; i < 27; i++){
			result = strcmp(&allLetters[i], &temp[i]);
			temp[i] = result;
			if(result == 0){
				printf(" %c", allLetters[i]);
			}
			else
				printf("-");	
		}
		printf(" \n");	
	}
	else {
		printf("Available letters: ");
		for (i = 0; i < 27; i++){
			char result = allLetters[i];

			if(result != guess){
				printf(" %c", allLetters[i]);
				temp[i] = allLetters[i];
			}
			else
				printf(" ");
				temp[i] = ' ';				
		}

		printf(" \n");	
	}
	return *allLetters;
}

char readGuess(char *guess){
	printf("Enter a letter: ");
	scanf(" %c", guess);
	printf("\n");

	return *guess;
}

char modifyAvailable(char * allLetters, char guess){
	int i;
	char result;
	for(i = 0; i < 26; i++){
		result = allLetters[i];
		if (result == guess){
			allLetters[i]= ' ';
		}
		printf("%c", allLetters[i]);
	}
	printf("\n");

	return *allLetters;
}

char modifyWord(char * word, char guess, char * tempWord, int wordLength){

	int i;
	
	for(i = 0; i < wordLength; i++){
		if(word[i] == guess){
			printf("%c", guess);
			tempWord[i] = word[i];
		}
		else if(word[i] == tempWord[i]){
			printf("%c",tempWord[i]);
		}
		else {
			printf("-");
			tempWord[i] = '-';
		}
	}
	printf("\n");

	return *tempWord;
}

char initTempWord(char * tempWord){
	int i;
	for(i = 0; i < 100; i++){
		tempWord[i] = 0;
	}

	return *tempWord;
}

int winCheck(char * word, char * tempWord, int attempts){
	int result = strcmp(word, tempWord);
	int k = 0;
	if (result == 0){
		attempts = 7;
		printf("Contratulations! You guessed the word!\n");
	}
	else{
		int trys;
		trys = 7 - attempts;
		printf("      You have %i more tries!", trys);
	}
	printf("\n");
	return attempts;
}

char inquirePlayAgain(char * playAgain){
	printf(" Would you like to play again? (y/n) ");
	scanf(" %c", playAgain);
	printf("\n");

	return *playAgain;
}

char restoreAllLetters(char  allLetters[27]){
	allLetters = "abcdefghijklmnopqrstuvwxyz";

	return *allLetters;
}
