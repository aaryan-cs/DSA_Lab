#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


Stack createStack(int capacity) {
    Stack stack;
    stack.array = (int *)malloc(capacity * sizeof(int));
    stack.top = -1; 
    stack.capacity = capacity;
    return stack;
}

// push
int push(Stack *stack, int value) {
    if (isFull(stack)) {
        return 0; //stack is full
    }
    stack->array[++(stack->top)] = value;
    return 1;
}

// pop 
int pop(Stack *stack, int *value) {
    if (isEmpty(stack)) {
        return 0;  //empty stack
    }
    *value = stack->array[(stack->top)--];
    return 1;
}

// peek
int peek(const Stack *stack, int *value) {
    if (isEmpty(stack)) {
        return 0; 
    }
    *value = stack->array[stack->top];
    return 1;
}

// isEmpty
int isEmpty(const Stack *stack) {
    return stack->top == -1;
}

// isFull
int isFull(const Stack *stack) {
    return stack->top == stack->capacity - 1;
}

// destroy stack
void destroyStack(Stack *stack) {
    free(stack->array);
    stack->array = NULL;
    stack->top = -1;
    stack->capacity = 0;
}
