/* CH-230-A
convertingstack.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>
#include "stack.h"

int main() {
    //declaring a stack and unsigned int
    struct stack s;
    unsigned int num;
    //reading it from the user input
    printf("Enter a number: ");
    scanf("%u",&num);
    //converting decimal number to binary and push bits onto the stack
    decimal_to_binary(num, &s);
    printf("The binary representation of %u is ", num);
    //printing the binary representation by popping from the stack
    int bit;
    while (!isEmpty(&s)) {
        pop(&bit, &s);
        printf("%d", bit); // Print each bit
    }
    printf(".\n");
    return 0;
}
