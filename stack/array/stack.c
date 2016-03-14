#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#define MAX_STACK_SIZE 10

Stack *createStack(){
    Stack *stack = (Stack*) malloc(sizeof(Stack));
    stack->currentSize = 0;
    return stack;
}

void push(Stack *stack, int item){
    if (stack->currentSize == MAX_STACK_SIZE){
        printf("Stack overflow!");
    } else {
        //Push the item to the currentSize position, then increases it by 1
        stack->items[stack->currentSize++] = item;
    }
}

int pop(Stack *stack){
    stack->currentSize--;
    return stack->items[stack->currentSize];
}

int peek(Stack *stack){
   return stack->items[stack->currentSize]; 
}

int isEmpty(Stack *stack){
    return (stack->currentSize == 0);
}

void print(Stack *stack){
    int i;
    for (i = stack->currentSize-1; i >= 0; i--)
        printf("|%d|\n", stack->items[i]);
}
