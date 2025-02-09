/* CH-230-A
a3_p6.c
Omar Benmoussa
obenmoussa@constructor.university*/
#include <stdio.h>
#include <math.h>
float to_pounds(int kg,int g){
    float p=2.2*kg+g*pow(10,-3)*2.2;
    return p;
}
//takes two int in kg and g, convert it to g and return the float
int main (){
    int kg;
    int g;
    //declaring two integers
    printf("Enter a mass in kg and gram: ");
    scanf("%d", &kg);
    getchar();
    scanf("%d",&g);
    //reading two integers from the user input
    printf("Result of conversion: %f",to_pounds(kg,g));
    //printing the result of conversion
    return 0;
}