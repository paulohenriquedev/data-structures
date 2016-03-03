typedef struct node Node;

struct node {
    int item;
    Node *previousNode;
    Node *nextNode;
};

Node* createDoublyLinkedList();

Node* insertNode(Node *node, int item);

void printDoublyLinkedList(Node *first);

void printDoublyLinkedListBackwards(Node *last);

int isEmpty(Node *first);

Node* search(Node *first, int item);

Node *removeNode(Node *first, int item);
