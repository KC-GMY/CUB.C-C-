/* CH-230-A
a3_p10.c
Omar Benmoussa
obenmoussa@constructor.university*/
#include <stdio.h>

float product(float a, float b);

void productbyref(float a, float b, float *p);

void modifybyref(float *a, float *b);
//protoypes of the fonctions
int main (){
    float a;
    float b;
    float prod;
    //declaring three floats
    printf("Enter the two values: ");
    scanf("%f",&a);
    scanf("%f",&b);
    //reading two floats from the user input
    printf("The product of a and b is: %f\n", product(a,b));
    //printing the return value of the first fonction
    productbyref(a,b,&prod);
    //calling the second fonction
    printf("The result of the second fonction is: %f\n",prod);
    //printing the return value of the second fonction
    modifybyref(&a,&b);
    //calling the third fonction
    printf("The new value of a is: %f\nThe new value of b is: %f",a,b);
    //printing the effect of the third fonction
    return 0;
}
float product(float a, float b){
    float product=a*b;
    return product;
}
//receives two float values and returns their product
void productbyref(float a, float b, float *p){
    *p= a*b;
}
//receives two float values and returns their product by reference
void modifybyref(float *a, float *b){
    *a=*a+3;
    *b=*b+11;
    //adds 3 to the first float and 11 to the second one
}
//recives two float values and returns their new values by reference