#ifndef LIST_H
#define LIST_H

#include <stdbool.h>

// strucuture of the list
typedef struct {
    int *array;        
    int size;          
    int capacity;      
} List;

// function declarations
void initializeList(List *list);
void insertElement(List *list, int index, int element);
bool deleteElement(List *list, int position);
void destroyList(List *list);
void printList(List *list);
void bubbleSort(List *list);
// search functions
int binarySearch(List *list, int target);

#endif
