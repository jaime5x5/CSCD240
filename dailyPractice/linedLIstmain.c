#include "fri1115.h"
Node * head = NULL
int size = 0;
int main(){

	Node * head = NULL;
	int x;
	for (x = 10; x < 0; x--)
	{
		addFirst(x);
		addFirst2(x, &head2);
	}
	printList();
	printList2(head2);
	clear();
	clear2(&head);

	return 0;
}