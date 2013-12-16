//Jaime Williams
//CSCD240 Assignment 1
//Due 11/1/2013


#include"cscd240hw1.h"

extern const int LIMIT;

void introduction(){
	printf("Welcome to Hangman. The game is played in the following fashion:\n");
	printf("Player one enters their name (single name)  \n");
	printf("and then player one enters a single word for the other player to guess\n");
	printf("(There will be no spaces in the word).\n");
	printf("Player 2 then enters their name (single name).\n");
	printf("Player 2 has a maximum of 7 tries to guess the word.\n");
	printf("If player 2 guesses the word in 7 or less tries they win.  \n");
	printf("\n");

}//end instructions

void readName(char * name){
	printf("Please enter name: ");
	scanf(" %s", name);
	printf("\n");
}//end readName

void readWord(char * word){
	printf("Please enter a word: ");
	scanf(" %s", word);
	tolower(*word);
	
	printf("\n");
}//end readWord

int wordCharCount(char * word){
	return strlen(word);
}//end wordCharCount

void wordIs(char * word, int wordLength){
	int i;
	for (i = 0; i < wordLength; i++){
		printf("-");
	}
	printf(" \n");
}//end wordIs

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
}//end availableChoices

char readGuess(char *guess){
	printf("Enter a letter: ");
	scanf(" %c", guess);
	tolower(*guess);
	printf("\n");

	return *guess;
}//end read guess

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
}//end modifyAvailable

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
}//end modifyWord

char initTempWord(char * tempWord){
	int i;
	for(i = 0; i < 100; i++){
		tempWord[i] = 0;
	}

	return *tempWord;
}//end  initTempWord

int winCheck(char * word, char * tempWord, int attempts){
	int result = strcmp(word, tempWord);
	if (result == 0){
		attempts = 7;
		printf("Contratulations! You guessed the word!\n");
	}
	else{
		int trys;
		trys = 7 - attempts;
		printf("\t\tYou have %i more tries!", trys);
	}
	printf("\n");
	return attempts;
}//end winCheck

char inquirePlayAgain(char * playAgain){
	printf(" Would you like to play again? (y/n) ");
	scanf(" %c", playAgain);
	printf("\n");

	return *playAgain;
}//end inquirePlayAgain