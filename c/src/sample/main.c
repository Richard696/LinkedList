#include <stdio.h>
#include <stdlib.h>

struct Node
{
    /* data */
    int data;
    struct Node* next;
};

// This function prints contents of linked list starting from 
// the given node 
void printList(struct Node* n) 
{ 
    while (n != NULL) { 
        printf(" %d ", n->data); 
        n = n->next; 
    } 
} 

int main() {
    struct Node* head = NULL; // initialised head pointer
    struct Node* second = NULL; // initialised pointer for second node
    struct Node* third = NULL; // initialised pointer for third node

    // allocate 3 nodes in the heap
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=NULL;

    printList(head); 
    printf("\n");
    return 0;
}
