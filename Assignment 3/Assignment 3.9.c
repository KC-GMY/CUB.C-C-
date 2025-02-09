/* CH-230-A
a3_p9.c
Omar Benmoussa
obenmoussa@constructor.university*/
#include <stdio.h>

double sum25(double v[], int n);
//fonction prototype
int main(){
    int n;
    double v[19];
    double a;
    //declaring an int, a double and an array of 20 doubles
    printf("Enter an integer value: ");
    scanf("%d",&n);
    //reading an integer from the user input
    for(int i=0; i<n;i++){
        printf("Enter a value: ");
        scanf("%lf",&v[i]);
    }
    //reading n numbers from the user input
    a=sum25(v,n);
    if(a==-111){
        printf("The positions 2 and 5 are not valid.");
    }
    //printing the message in case the position 2 and 5 are not valid
    else{
        printf("sum=%lf",sum25(v,n));
    }
    //printing the sum of the elements at position 2 and 5
    return 0;
}
double sum25(double v[], int n){
    double sum;
    if(n<=5){
        return -111;
    }
    //checking if the position 2 and 5 are valid
    else{
        sum= v[2]+v[5];
    }
    //computing the sum of position 2 and 5 in the array
    return sum;
}
//receives an array and return the sum of the position 2 and 5 if valid