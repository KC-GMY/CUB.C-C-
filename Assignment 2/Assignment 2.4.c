/* CH-230-A
 a2_p4.c
 Omar Benmoussa
 obenmoussa@constructor.university*/
#include <stdio.h>
int main(){
    float a,b,h;
    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);
    printf("Enter the value of h: ");
    scanf("%f", &h);
    //reading the three variables a,b,h from the user input
    printf("square area=%f\nrectangle area=%f\n",a*a,a*b);
    printf("triangle area=%f\ntrapezoid area=%f", a*h/2,(a+b)*h/2);
    //printing the square, rectangle, triangle and trapezoid areas
    return 0;
}