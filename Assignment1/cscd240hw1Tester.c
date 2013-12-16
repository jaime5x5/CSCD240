//Jaime Williams
//CSCD240 Assignment 1
//Due 11/1/2013
/*
Program does not validate against ints and chars,
does not differentiate between correct or incorrect choice 
with message but visual que is provided as result of guess.

If player selects to play another game the available letters
are held from the first game. ???? stoopid monkey.

Crappy app also not capable of preventing p2 guess of previously
chosen letter.

I consider this submission a get it working phase, it feels like
there are system flow issues. Structure?
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include"cscd240hw1.h"

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
		inquirePlayAgain(&playAgain);
		playAgain = tolower(playAgain);
		attempts = 0;
	}while(playAgain == 'y');

	return 0;

} // end main