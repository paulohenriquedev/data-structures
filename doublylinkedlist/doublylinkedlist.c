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
    if (first->item == item || first == NULL)
        return first;
    else
        return search(first->nextNode, item);
}

Node *removeNode(Node *first, int item) {
    Node *current = first;

    //If the list is empty
    if (current == NULL)
        return first;
 
    //Look for the item through the list
    while (current != NULL && current->item != item)
        current = current->nextNode;
 
    //If the searched item ir the first of the list, we set the second element as the first
    //Else, we change the previousNode->nextNode to point the following element
    if (first == current)
        first = current->nextNode;
    else
        current->previousNode->nextNode = current->nextNode;
    
    //Updating the previousNode of the following element
    if (current->nextNode != NULL)
        current->nextNode->previousNode = current->previousNode;

    free(current);
    return first;
}
