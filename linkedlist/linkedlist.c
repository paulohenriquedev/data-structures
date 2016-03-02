#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

struct node {
    int item;
    Node* nextNode;
};

Node* createLinkedList() {
    return NULL;
}

int isEmpty(Node* first) {
    return first == NULL;
}

Node* insertNode(Node* first, int item) {
    Node* newNode = (Node*) malloc(sizeof(Node));
    newNode->item = item;
    newNode->nextNode = first;
    return newNode;
}

void printLinkedList(Node* first) {
    Node* node;
    for (node = first; node != NULL; node = node->nextNode)
        printf("%d\n", node->item);
}

void printLinkedListReverse(Node* first){
    if (first != NULL){
        printLinkedListReverse(first->nextNode);     
        printf("%d\n", first->item);
    }
}

Node* search(Node* first, int item){
    Node *node;
    for (node = first; node != NULL; node = node->nextNode)
        if  (node->item == item)
            return node;
    return NULL;
}

Node* removeNode(Node* first, int item) {
    Node *previous = NULL;
    Node *current = first;
    
    //Walk through the nodes until the end or find the item
    while (current != NULL && current->item != item) {
        previous = current;
        current = current->nextNode;
    }

    //If the item is not on the list
    if (current == NULL)
        return first;
   
    //previous is NULL when the deleted element is the first. In this case, first points to its next node 
    if (previous == NULL)
        first = current->nextNode;
    else
        //The element before the deleted item now points to its next element
        previous->nextNode = current->nextNode; 

    free(current);

    return first;
}
