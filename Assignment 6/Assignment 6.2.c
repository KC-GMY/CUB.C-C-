/* CH-230-A
a6_p2.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>

//macro to print the least significant digit of the char
#define BIT(X){printf("The least significant bit is: %d", X&1);\
              }

int main (){
    //declaring and reading an unsigned char from the user input
    unsigned char X;
    printf("Enter a character: ");
    scanf("%c",&X);
    getchar();
    //printing the decimal representation of the unsigned char
    printf("The decimal representation is: %d\n",X);
    //calling the macro
    BIT(X);
    return 0;
}