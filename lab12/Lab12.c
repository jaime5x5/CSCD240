#include "lab12.h"

int main()
{
    FILE * fin = NULL;
    int total, choice;
    Address array[10]; // guaranteed 1 to 10 inclusive

    fin = openFile();

    total = fillArray(array, fin);


    fclose(fin);
    fin = NULL;

 //    do
 //    {
	// 	choice = menu();
 //        switch(choice)
 //        {
	// 		case 1:	printStreetSortedArray(array, total);
	// 				break;

	// 		case 2: printCitySortedArray(array, total);
	// 				break;

	// 		case 3: printStateCitySortedArray(total, array);
	// 				break;

	// 		case 4:	printZipSortedArray(total, array);
	// 				break;

	// 		case 5:	printf("all done\n");

	// 	}// end switch

	// }while(choice != 5);

    return 0;

}// end main