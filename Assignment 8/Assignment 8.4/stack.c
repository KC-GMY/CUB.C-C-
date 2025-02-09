/* CH-230-A
stack.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include "stack.h"
#include <stdio.h>

//initializing the stack
void initialize_stack(struct stack *ps) {
    ps->count = 0;
}

//receives a stack and checks if it's empty
int isEmpty(const struct stack *ps) {
    return ps->count == 0;
}

//receives an item and pushs it onto the stack
int push(int item, struct stack *ps) {
    //returning -1 if there is a stack overflow
    if (ps->count >= MAXSTACK) {
        return -1;
    }
    ps->array[ps->count++] = item;
    return 0;
}

//receives a stack and pops the item from it
int pop(int *pitem, struct stack *ps) {
    //return -1 if the stack is empty
    if (isEmpty(ps)) {
        return -1;
    }
    *pitem = ps->array[--ps->count];
    return 0;
}

//receives a stack and empties it
void empty(struct stack *ps) {
    ps->count = 0;
}

//converting a decimal number to binary, pushes each bit onto the stack
void decimal_to_binary(unsigned int num, struct stack *ps) {
    initialize_stack(ps);
    //converting the number to binary
    do {
        push(num % 2, ps);
        num /= 2;
    } while (num > 0);
}