/* CH-230-A
a6_p3.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>

//macro to define the max of three integers
#define MAX(X,Y,Z) ((X>Y && X>Z)? X : ((Y>X && Y>Z)? Y: Z))

//macro to define the min of three integers
#define MIN(X,Y,Z) ((X<Y && X<Z)? X : ((Y<X && Y<Z)? Y: Z))

//macro to compute the mid range of three integers
#define MID_RANGE(MIN,MAX) ((MIN+MAX)/2.0)

int main (){
    //declaring and reading three integers from the user input
    int X,Y,Z;
    printf("Enter the integers: ");
    scanf("%d",&X);
    getchar();
    scanf("%d",&Y);
    getchar();
    scanf("%d",&Z);
    //printing the result of the macro
    printf("The mid-range is: %.6f",MID_RANGE(MAX(X,Y,Z),MIN(X,Y,Z)));
    return 0;
}