//Jaime Williams
//CSCD240 Lab14
//Due 11/21/2013

#include "lab14.h"

const int INTS = 30;
const int CHARS = 20;

int main()
{
    srand(time(NULL));
    int x, intArray[INTS];
    char charArray[CHARS];

    for(x = 0; x < INTS; x++)
        intArray[x] = rand() % 100 + 1;

    printf("Ints Before\n");
    printIntArray(intArray);
    printf("\n\n");

    qsort(intArray, INTS, sizeof(int), compareToInts);

    printf("Ints After\n");
    printIntArray(intArray);
    printf("\n\n");


    for(x = 0; x < CHARS; x++)
        charArray[x] = (char)( rand() % 26 + 65);

    printf("Chars Before\n");
    printCharArray(charArray);
    printf("\n\n");

    qsort(charArray, CHARS, sizeof(char), compareToChars);

    printf("Chars After\n");
    printCharArray(charArray);
    printf("\n\n");

    return 0;
}