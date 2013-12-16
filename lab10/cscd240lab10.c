//Jaime Williams
//CSCD240 Lab10
//Due 11/6/2013
/*
By jove I think he's got it. 
*/
#include <stdio.h>
#include <stdlib.h>
#include "cscd240lab10.h"

const int MAX = 100;

int main(int argc, char *argv[])
{

	int month, choice;
	int * temps;
	FILE * fin = NULL;
	char fn[MAX];

	fin = openFile(argc, argv);
	
	month = readMonth(fin);
	temps = fillArray(month, fin);
	do
	{
		choice = menu();

		if(choice == 1)
		{
			displayMaxTemp(temps, month);

		}// end choice == 1

		else if(choice == 2)
		{
			displayMinTemp(temps, month);
		}// end choice == 2

		else if(choice == 3)
		{
			displayAvgTemp(temps, month);
		}// end choice == 3

		else if(choice == 4)
		{
			displayMedianTemp(temps, month);

		}// end choice == 4

		else if(choice == 5)
		{
			displayModeTemp(temps, month);

		}// end choice == 5


		else if(choice == 6)
		{
			fclose(fin);
			fin = NULL;
			cleanUp(temps);
			temps = NULL;
			readFileName(fn);
			fin = openInputFile(fn);
			month = readMonth(fin);
			temps = fillArray(month, fin);

		}// end choice == 6

	}while(choice != 7);

	if(fin != NULL)
		fclose(fin);

	cleanUp(temps);
	temps = NULL;

	return 0;

}// end main
