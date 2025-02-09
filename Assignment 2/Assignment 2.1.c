/* CH-230-A
 a2_p1.c
 Omar Benmoussa
 obenmoussa@constructor.university*/
#include <stdio.h>

int main (){
    double x, y;
    printf("Enter the first double: ");
    scanf("%lf",&x);
    printf("Enter the second double: ");
    scanf("%lf", &y);//reading x and y from the keyboard
    printf("sum of doubles=%lf\ndifference of doubles=%lf\nsquare=%lf",x+y,x-y,x*x); 
    //printing the sum, difference and square of the doubles
    int a,b;
    printf("\nEnter the first integer: ");
    scanf("%i", &a);
    printf("Enter the second integer: ");
    scanf("%i", &b);
    getchar();//reading the integers from the keyboard
    printf("sum of integers=%i\nproduct of integers=%i",a+b,a*b);
    //printing the sum and product of the integers
    char c,d;
    printf("\nEnter the first character: ");
    scanf("%c", &c);
    getchar();
    
    printf("Enter the second character: ");
    scanf("%c", &d);//reading the chars from the keyboard
    getchar();//to ignore the new line character
    printf("sum of chars=%d\nproduct of chars=%d\nsum of chars=%c\nproduct of chars=%c", c+d, c*d,c+d,c*d);
    //printing the sum and product as decimal and chars
    return 0;
}