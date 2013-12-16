#include "linkedList.h"

extern Node * head;
extern int size;

void addFirst(int d){
    Node * newNode = (Node *)calloc(1, sizeof(Node));
    newNode -> next = NULL;

    int * ptr = (void *)calloc(1, sizeof(d));
    *ptr = d;
    newNode -> data = ptr;

    if(head == NULL)
        head = newNode;

    else{
        newNode->next = head;
        head = newNode;
    }
    size ++;
}

void printList()
{
        if(head == NULL)
            printf("Empty List\n");

        else
        {
            Node * cur = head;
            while(cur != NULL)
            {
                int * ptr = cur->data;
                printf("%d\n", *ptr);
                cur = cur -> next;
            }
        }// end else
}

void clear()
{
    if(head != NULL)
    {
        Node * cur = head;
        while(cur != NULL)
        {
            head = head->next;
            free(cur->data);
            cur->data = NULL;
            free(cur);
            cur = head;
        }
    }
    size = 0;

}

void addFirst2(int d, Node ** head2)
{
   // Node * h = *head2;

    Node * newNode = (Node *)calloc(1, sizeof(Node));
    newNode -> next = NULL;

    int * ptr = (void *)calloc(1, sizeof(d));
    *ptr = d;
    newNode -> data = ptr;

    if(*head2 == NULL)
        *head2 = newNode;

    else
    {
        newNode->next = *head2;
        *head2 = newNode;

    }
    size ++;

}

void printList2(Node * head2)
{
        if(head2 == NULL)
            printf("Empty List\n");

        else
        {
            Node * cur = head2;
            while(cur != NULL)
            {
                int * ptr = cur->data;
                printf("%d\n", *ptr);
                cur = cur -> next;
            }
        }// end else
}

void clear2(Node ** head2)
{
    if(*head2 != NULL)
    {
        Node * cur = *head2;
        while(cur != NULL)
        {
            *head2 = (*head2)->next;
            free(cur->data);
            cur->data = NULL;
            free(cur);
            cur = *head2;
        }
    }
    size = 0;

}


