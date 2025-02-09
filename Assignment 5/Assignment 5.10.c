/* CH-230-A
a5_p10.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>

//receives an integer and prints n,n-1,...1
void print(int n){
    if(n==1){
        printf("%d",n);
    }
    else{
        printf("%d\n",n);
        print(n-1);
    }
}

int main (){
    //declaring and reading an int from the user input
    int n;
    printf("Enter an integer: ");
    scanf("%d",&n);
    //calling the function
    print(n);
    return 0;
}