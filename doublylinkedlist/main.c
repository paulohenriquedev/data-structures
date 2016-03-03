#include <stdio.h>
#include <stdlib.h>
#include "doublylinkedlist.h"

void main() {
    Node* teste = createDoublyLinkedList();
    
    printf("Empty: %d\n", isEmpty(teste));

    teste = insertNode(teste, 1);
    teste = insertNode(teste, 2);
    teste = insertNode(teste, 3);
    teste = insertNode(teste, 4);
    teste = insertNode(teste, 5);

    printf("Empty: %d\n", isEmpty(teste)); 

    printDoublyLinkedList(teste);
    printf("\n");
    printDoublyLinkedListBackwards(teste); 

    printf("Resultado da busca: %d\n", search(teste, 3)->item);
}
