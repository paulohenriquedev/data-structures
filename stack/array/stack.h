typedef struct stack Stack;

#define MAX_STACK_SIZE 10

struct stack {
   int currentSize;
   int items[MAX_STACK_SIZE];
};

Stack *createStack();

void push(Stack *stack, int item);

int pop(Stack *stack);

int peek(Stack *stack);

int isEmpty(Stack *stack);

void print(Stack *stack);
