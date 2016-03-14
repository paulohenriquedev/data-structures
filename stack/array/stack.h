typedef struct stack Stack;
typedef struct node Node;

struct node {
    int item;
    Node *nextNode;
};

struct stack {
    Node *top;
};

Stack *createStack();

void push(Stack *stack, int item);

int pop(Stack *stack);

int peek(Stack *stack);

int isEmpty(Stack *stack);

void print(Stack *stack);
