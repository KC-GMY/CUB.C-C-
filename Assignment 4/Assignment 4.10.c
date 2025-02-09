/* CH-230-A
a4_p10.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>
#include <math.h>

//receives 2 floats, passes by reference the prod, div, power, division
void proddivpowinv(float a, float b, float *prod, float *div,
float *pwr, float *invb){
    *prod=a*b;
    *div=a/b;
    *pwr=pow(a,b);
    *invb=pow(b,-1);
}

int main (){
    //declaring six floats and reading two floats from the user input
    float a,b,prod,div,pwr,invb;
    printf("Enter the two floats: ");
    scanf("%f",&a);
    getchar();
    scanf("%f",&b);
    //calling the function and printing its result
    proddivpowinv(a,b,&prod,&div,&pwr,&invb);
    printf("Product=%f\nDivision=%f\nPower=%f\nInverse=%f",prod,div,pwr,invb);
    return 0;
}