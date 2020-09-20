#include <stdio.h>
#include <stdlib.h>

#ifndef LINKEDLIST
#define LINKEDLIST

struct Node;

// insert in the begining of the linked list
void insertFirst(Node** head,int dta);

// insert in the begining of the linked list
void insertLast(Node* head, int dta)

// pop the data from the last node
void pop(Node* head);

// print the data in the linked list
void printList(Node* head);

#endif // !LINKEDLIST
