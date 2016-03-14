#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

//Creates a new stack with a NULL pointer as top element (empty)
Stack *createStack(){
    Stack *stack = (Stack*) malloc(sizeof(Stack));
    stack->top = NULL;
    return stack;
}

void push(Stack *stack, int item){
    Node *newTop = (Node*) malloc(sizeof(Node));
    newTop->item = item;
    newTop->nextNode = stack->top;
    stack->top = newTop;
}

int pop(Stack *stack){
    if (stack->top == NULL)
        return -1;
    Node *returnTop = (Node*) malloc(sizeof(Node));
    int returnValue = stack->top->item;
    stack->top = stack->top->nextNode;
    return returnValue;
}

int peek(Stack *stack){
    if (stack->top == NULL)
        return -1;
    return stack->top->item;
}

int isEmpty(Stack *stack){
    return (stack->top == NULL);
}

void print(Stack *stack){
    Node *n = (Node*) malloc(sizeof(Node));
    for (n = stack->top; n != NULL; n=n->nextNode)
        printf("%d\n",n->item);
}
