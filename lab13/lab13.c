#include "lab13.h"

int main()
{
    FILE * fin = NULL;
    int total, choice;
    Address * array = NULL;

    fin = openFile();

    array = fillArray(&total, fin);

    fclose(fin);
    fin = NULL;

    do
	{
		choice = menu();
		switch(choice)
		{
			case 1:	printStreetSortedArray(array, total);
					break;

			case 2: printCitySortedArray(array, total);
					break;

			case 3: printStateCitySortedArray(total, array);
					break;

			case 4:	printZipSortedArray(total, array);
					break;

			case 5:	printf("all done\n");

		}// end switch

	}while(choice != 5);

	cleanUp(array, total);
	array = NULL;

    return 0;

}// end main