#include <stdio.h>
#include <stdlib.h>
#include "stack.h"



int main() {
    int cap;
    printf("Enter capacity of stack: ");
    scanf("%d",&cap);
    Stack stack = createStack(cap);
    
    printf("Pushing elements onto the stack:\n");
    for (int i = 1; i <=cap; ++i) {
        if (push(&stack, i)) {
            printf("Pushed %d\n", i);
        } else {
            printf("Failed to push %d: Stack is full\n", i);
        }
    }
    
    int topValue;
    if (peek(&stack, &topValue)) {
        printf("Top element is %d\n", topValue);
    } else {
        printf("Failed to peek: Stack is empty\n");
    }
    
    printf("Popping elements from the stack:\n");
    while (!isEmpty(&stack)) {
        if (pop(&stack, &topValue)) {
            printf("Popped %d\n", topValue);
        } else {
            printf("Failed to pop: Stack is empty\n");
        }
    }
    
    if (pop(&stack, &topValue)) {
        printf("Popped %d\n", topValue);
    } else {
        printf("Failed to pop: Stack is empty\n");
    }
        destroyStack(&stack);
    
    return 0;
}
