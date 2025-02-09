/* CH-230-A
a5_p11.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>
#include <math.h>

//receives an integer and returns 1 or 0 if x is a prime number or not
int prime(int x,int pow){
    //returns 1 if x is 2
    if((x==2)|| pow==1)
        return 1;
    else if(x%pow==0)
        return 0;
    //recursive to return the product of all the modulos
    else if(pow>=2)
        return (x%pow)* prime(x,x%(pow-1));
    
}

int main (){
    //declaring and reading an int from the user input
    int x;
    printf("Enter an integer: ");
    scanf("%d",&x);
    //printing a message according to the return value of the fonction
    if(prime(x,pow(x,0.5))==0){
    printf("%d is not prime",x);
    }
    else if(prime(x,pow(x,0.5))==1){
    printf("%d is prime",x);
    }
    return 0;
}