
#include "list.c"

int main() {
    List list;
    initializeList(&list);
    insertElement(&list,3,4);
    printList(&list);
    deleteElement(&list, 3);
    printList(&list);
    printf("Element found at index: %d",binarySearch(&list,5));
    
    return 0;
}
