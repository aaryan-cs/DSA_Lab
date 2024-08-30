#ifndef STACK_H
#define STACK_H

#include <stdint.h>

// stack structure
typedef struct {
    int *array;   
    int top;       
    int capacity;
} Stack;


Stack createStack(int capacity);

int push(Stack *stack, int value);
int pop(Stack *stack, int *value);
int peek(const Stack *stack, int *value);
int isEmpty(const Stack *stack);
int isFull(const Stack *stack);
void destroyStack(Stack *stack);

#endif // STACK_H
