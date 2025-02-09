/* CH-230-A
stack.h
Omar Benmoussa
obenmoussa@constructor.university*/

#ifndef STACK_H
#define STACK_H

#define MAXSTACK 12

//defining a stack
struct stack {
    unsigned int count;
    int array[MAXSTACK];
};

//function prototypes
void initialize_stack(struct stack *ps);
int push(int item, struct stack *ps);
int pop(int *pitem, struct stack *ps);
void empty(struct stack *ps);
int isEmpty(const struct stack *ps);

//function prototype for binary conversion
void decimal_to_binary(unsigned int num, struct stack *ps);

#endif