#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void initializeList(List *list){
    int MAX;
    printf("Enter capacity of list: \n");
    scanf("%d",&MAX);
    list->capacity=MAX;
    printf("Enter size of list: \n");
    scanf("%d",&list->size);
    list->array = (int *)malloc(list->capacity*sizeof(int));
    for (int i=0;i<list->size;i++){
        printf("Enter element no. %d: \n",i+1);
        scanf("%d",&list->array[i]);
    }
}

void insertElement(List *list, int index, int element) {
    if (index < 0 || index > list->size) {
        printf("Index %d is out of bounds. Valid index is between 0 and %d.\n", index, list->size);
        return;
    }

    // if capacity is already full
    if (list->size == list->capacity) {
        int newCapacity = list->capacity * 2;
        int *newArray = (int *)malloc(newCapacity * sizeof(int));
        for (int i = 0; i < list->size; i++) { // creating new copy of array
            newArray[i] = list->array[i];
        }
        free(list->array);
        list->array = newArray;
        list->capacity = newCapacity;
    }

    // shifting
    for (int i = list->size; i > index; i--) {
        list->array[i] = list->array[i - 1];
    }
    //inserting new element and updating new size of the list
    list->array[index] = element;
    list->size++;
}
bool deleteElement(List *list, int position) {
    if (position < 0 || position >= list->size) {
        return false;
    }
    
    for (int i = position; i < list->size - 1; ++i) {
        list->array[i] = list->array[i + 1];
    }
    
    list->size--;
    return true;
}
void bubbleSort(List *list){
    for(int i=0;i<list->size-1;i++){
        for(int j=0;j<list->size-i-1;j++){
            if(list->array[j]>list->array[j+1]){
                int temp;
                temp=list->array[j+1];
                list->array[j+1]=list->array[j];
                list->array[j]=temp;
            }
        }
    }
}
int binarySearch(List *list, int target){
    bubbleSort(list);
    int low=0;
    int high= list->size-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(list->array[mid]==target){return mid;}
        if (list->array[mid]>target){high = mid - 1;}
        else{low = mid + 1;}
        
    }
    return -1;

    }
// void destroyList(List *list) {
//     for(int i=0; i<list->size-1;i++);{
//         free()
//     }
// }

void printList(List *list) {
    for (int i = 0; i < list->size; ++i) {
        printf("%d ", list->array[i]);
    }
    printf("\n");
}

    
