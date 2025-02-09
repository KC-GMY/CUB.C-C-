/* CH-230-A
a6_p5.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>

//receives an unsigned int and prints its binary representation backward
void bit(int x){
    printf("The backwards binary representation is: ");
    for(int i=0;i<6;i++){
        printf("%d",(1&(x>>i)));
    }
}

int main(){
    //declaring and reading an unsigned char from the user input
    unsigned char a;
    printf("Enter a character: ");
    scanf("%c",&a);
    getchar();
    //printing the decimal representation of the unsigned char
    printf("The decimal representation is: %d\n",a);
    //calling the function
    bit(a);
    return 0;
}
