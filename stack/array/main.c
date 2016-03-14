#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void main(){
    Stack* stack = createStack();

    printf("Empty: %d\n", isEmpty(stack));

    printf("Tamanho atual da pilha: %d\n", stack->currentSize);

    push(stack, 1);
    push(stack, 2);
    push(stack, 3);

    printf("Empty: %d\n", isEmpty(stack));
    
    printf("Tamanho atual da pilha: %d\n", stack->currentSize);

    print(stack);

    int num = pop(stack);

    printf("Número retirado: %d\n", num);
    
    printf("Tamanho atual da pilha: %d\n", stack->currentSize);
 
    print(stack);
}
