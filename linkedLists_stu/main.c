#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

Node * head = NULL;
int size = 0;

int main()
{
    Node * head2 = NULL;
    int x;
    for(x = 10; x > 0; x--)
    {
        addFirst(x);
        addFirst2(x, &head2);
    }


    //printList();
    printList2(head2);
    clear();
    clear2(&head2);
    return 0;
}
