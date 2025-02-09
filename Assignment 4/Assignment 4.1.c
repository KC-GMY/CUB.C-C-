/* CH-230-A
a4_p1.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>
#include <math.h>

int main (){
    //declaration of three double
    double min, max, step;
    //reading three doubles from the user input
    printf("Enter the lower limit and the upper limit: ");
    scanf("%lf", &min);
    getchar();
    scanf("%lf", &max);
    printf("Enter the step size: ");
    scanf("%lf",&step);
    
    //loop to print a table of radius value x,area of circle, perimeter of circle
    for(double x=min; x<=max; x+=step){
        printf("%lf %lf %lf\n",x,x*x*M_PI,2*M_PI*x);
    }
    return 0;
}