/* CH-230-A
a6_p1.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>

//macro with three variables that swaps the two variables
#define SWAP(X,Y,type){type temp=X; X=Y; Y=temp;}

int main(){
    //declaring 2 int and float and reading them from the user input
    int U,V;
    double A,B;
    printf("Enter the two integers: ");
    scanf("%d",&U);
    getchar();
    scanf("%d",&V);
    printf("Enter the two doubles: ");
    scanf("%lf",&A);
    getchar();
    scanf("%lf",&B);
    //using the macro
    SWAP(U,V,int);
    SWAP(A,B,double);
    //printing the result after swapping
    printf("After swapping: \n%d\n%d",U,V);
    printf("\n%.6lf\n%.6lf",A,B);
    return 0;
}