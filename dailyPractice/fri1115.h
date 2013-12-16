#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"
typedef struct node{
	void * data;
	struct node * next;
};

typedef struct node Node;

void addFirst(int d);
void printList();
void clear();
void addFirst2(int x, Node ** head2);
void printList2(Node * head2);
VOID clear2(Node ** head2);
#endif