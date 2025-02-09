/* CH-230-A
a6_p6.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>

//receives an unsigned int and prints its binary representation
void bit(int x){
    printf("The binary representation is: ");
    for(int i=0;i<8;i++){
        if((128&(x<<i))==128){
            printf("1");
        }
        else{
            printf("0");
        }
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