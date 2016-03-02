#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

void main(){
    Node* list = createLinkedList(); 

    printf("Empty? %d\n", isEmpty(list)); 

    list = insertNode(list, 1);
    list = insertNode(list, 2);
    list = insertNode(list, 3);

    printf("Empty? %d\n", isEmpty(list));

    printLinkedListReverse(list);

    list = removeNode(list, 4);

    printLinkedListReverse(list);
}
