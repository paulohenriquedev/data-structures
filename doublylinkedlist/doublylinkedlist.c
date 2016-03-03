#include <stdio.h>
#include <stdlib.h>
#include "doublylinkedlist.h"

Node* createDoublyLinkedList() {
    return NULL;
}

Node* insertNode(Node *node, int item) {
    //Allocate and initialize the newNode attributes
    Node *newNode = (Node*) malloc(sizeof(Node));
    newNode->item = item;
    newNode->nextNode = node;
    newNode->previousNode = NULL;

    //If the list is not empty, update the old first item to point the newNode
    if (node != NULL)
        node->previousNode = newNode;

    return newNode;
}

void printDoublyLinkedList(Node *first) {
    Node *p;
    for (p = first; p != NULL; p = p->nextNode)
        printf("%d\n", p->item);
}

void printDoublyLinkedListBackwards(Node *first) {
    if (first != NULL) {
        printDoublyLinkedListBackwards(first->nextNode);
        printf("%d\n", first->item);
    }    
}

int isEmpty(Node *first) {
    return first == NULL;
}

Node* search(Node *first, int item) {
    Node *p;
    for (p = first; p != NULL; p = p->nextNode)
        if (p->item == item)
            return p;
    return NULL;
}

Node *removeNode(Node *first, int item) {

}
