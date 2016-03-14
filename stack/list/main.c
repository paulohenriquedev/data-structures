#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void main(){
    Stack *myStack = createStack();

    printf("Is empty: %d\n", isEmpty(myStack));

    push(myStack, 1);
    push(myStack, 2);
    push(myStack, 3);
    
    printf("Is empty: %d\n", isEmpty(myStack)); 

    print(myStack);

    printf("\n%d\n", pop(myStack));
    printf("%d\n", peek(myStack));
    printf("%d\n", peek(myStack));
}
