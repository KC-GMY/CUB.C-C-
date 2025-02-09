/* CH-230-A
 a2_p8.c
 Omar Benmoussa
 obenmoussa@constructor.university*/
#include <stdio.h>
int main(){
    int a;
    //declaration of the integer
    printf("Enter an integer: ");
    scanf("%d",&a);
    //reading the int from the user input
    if(a%2==0 && a%7==0){
        printf("The number is divisible by 2 and 7");
    //printing the sentence if 2 and 7 divide the number
    }
    else{
        printf("The number is NOT divisible by 2 and 7");
    //printing the sentence if the number is not divisible by either 2 or 7
    }
    return 0;
}