//Jaime Williams
//CSCD240 Assignment 1
//Due 11/1/2013

#ifndef CSCD240HW1_H
#define CSCD240HW1_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"cscd240hw1.h"

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
int tolower(int c);

#endif