//Defines the typedef for the struct node
typedef struct node Node;

//Method responsible for creating an empty linked list
Node* createLinkedList();

//Inserts an item into the list
Node* insertNode(Node* first, int item);

//Returns 1 if the list is empty, 0 if not
int isEmpty(Node* first);

//Prints the list
void printLinkedList(Node* first);

//Prints the list in reverse order
void printLinkedListReverse(Node* first);

Node* search(Node* first, int item);

Node* removeNode(Node* first, int item);

