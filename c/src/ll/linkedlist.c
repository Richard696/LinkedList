#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

int input(int dta){
    struct Node* node = NULL;
    node->data=dta;
    node->next=NULL;
}