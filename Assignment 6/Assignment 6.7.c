/* CH-230-A
a6_p7.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>
#include <math.h>

//receives a char, three int bits to be changed to 1
//prints the binary representation before and after the change
void set3bits(unsigned char a,int b, int c, int d){
    //for loop to print the binary representation
    printf("The binary representation is: ");
    for(int i=0;i<8;i++){
        if((128&(a<<i))==128){
            printf("1");
        }
        else{
            printf("0");
        }
    }
    int e=pow(2,b)+pow(2,c)+pow(2,d);
    printf("\nAfter setting the bits: ");
    for(int i=0;i<8;i++){
        if((128&((a|e)<<i))==128){
            printf("1");
        }
        else{
            printf("0");
        }
    }
}

int main(){
    //declaring an unsigned char, three int, reading them from the user input
    unsigned char a;
    int b,c,d;
    printf("Enter the character: ");
    scanf("%c",&a);
    getchar();
    printf("Enter an integers: ");
    scanf("%d",&b);
    getchar();
    scanf("%d",&c);
    getchar();
    scanf("%d",&d);
    //calling the function
    set3bits(a,b,c,d);
    return 0;
}