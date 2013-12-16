#include "linkedlist.h"

extern Node * head;
extern int size;

void addFirst(int d){
	Node * newNode = (Node *)calloc(1, sizeof(Node));
	newNode -> next = NULL;

	int * ptr = (int *)calloc(1, sizeof(int));
	//int * ptr = (void *)calloc(1, sizeof(d));//makes 

	*ptr = d;	//or
	//ptr[0] = d;

	//newNode -> data = (void *)d;//takes int and makes void pointer
	newNode -> data = ptr;

	if(head == NULL)
		head = newNode;
	else{
		newNode->next = head;
		head = newNode;
	}
	size++;
}//end addFirst

voidprintList(){
	if(head == NULL)
		printf("print empty\n");
	else{
		Node * cur = head;
		while(cur != NULL){
			int * ptr = cur->data;
			printf("%d\n", *ptr);
			cur = cur -> next;
		}
	}
}//end print

void printList2(Node * head2){
	if(head == NULL)
		printf("print empty\n");
	else{
		Node * cur = head2;
		while(cur != NULL){
			int * ptr = cur->data;
			printf("%d\n", *ptr);
			cur = cur -> next;
		}
	}
}//end printlist2

void clear(){
	if(head != NULL)
		Node * cur = head;
	while(cur != NULL){
		head = head->next;
		free(cur->data);
		free(cur);
		cur = head;
	}
	size = 0;
}//end clear

void clear2(Node ** head2){
	if(head != NULL)
		Node * cur = *head2;
	while(cur != NULL){
		*head2 = 8head->next;
		free(cur->data);
		free(cur);
		cur = head;
	}
	size = 0;
}//end clear

void addFirst2(int x){

	Node * h = head2;

	Node * newNode = (Node *)calloc(1, sizeof(Node));
	newNode -> next = NULL;

	int * ptr = (int *)calloc(1, sizeof(int));
	//int * ptr = (void *)calloc(1, sizeof(d));//makes 

	*ptr = d;	//or
	//ptr[0] = d;

	//newNode -> data = (void *)d;//takes int and makes void pointer
	newNode -> data = ptr;

	if(head == NULL)
		head = newNode;
	else{
		newNode->next = *head2;
		*head2 = newNode;
	}
	size++;
}