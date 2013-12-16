#include "hw4.h"

int main()
{
	int total, choice;
	FILE * fin = NULL;
	Stock * array = NULL;

	fin = openInputFile();
	total = countRecords(fin, 3);
	array = buildArray(fin, total);

	do
	{
		choice = menu();

		// if(choice == 1)
		// printStockValue(array, total);

		// else if(choice == 2)
		// 	array = buyStock(array, total);

		// else if(choice == 3)
		// 	array = sellStock(total, array);

		// else if(choice == 4)
		// 	printStockInfo(array, total);

	}while(choice != 5);

	// cleanUp(array, total);

	return 0;

}// end main

