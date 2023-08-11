#define max 50
typedef struct stack{
    int data[max];
    int top;
}stack;


void init(stack *s);

int full(stack *s);

int empty(stack *s);

int push(stack *s, int c);

int pop(stack *s);

int popall(stack *s);