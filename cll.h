#include <stdio.h>

struct node{
    int data;
    struct node* next;
};
int init(struct node**);
int insertAfter(struct node**, struct node *, int data);
int deleteElement(struct node**, int data);
int search(struct node**, int key);
int traverse(struct node**);
int destroy(struct node**);
