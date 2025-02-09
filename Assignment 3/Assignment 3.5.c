/* CH-230-A
a3_p5.c
Omar Benmoussa
obenmoussa@constructor.university*/
#include <stdio.h>

int main (){
    char c;
    int n;
    double temp[99];
    //declaring a char, integer and an array of 100 doubles

    printf("Enter a character and an integer: ");
    scanf("%c",&c);
    getchar();
    scanf("%d",&n);
    //reading a char and integer from the user input
    for(int i=0; i<n; i++){
        printf("Enter the temperatures: ");
        scanf("%lf",&temp[i]);
    }
    //loops to read n doubles from the user input
    float sum;
    switch(c){
        case 's':
        for(int j=0; j<n;j++){
            sum+= temp[j];
        }
        printf("The sum of the temperatures is: %lf", sum);
        break;
        //printing the sum of the temperatures in case the char is 'c'
        case 'p': 
        printf("The list of the temperatures is: ");
        for(int j=0; j<n;j++){
            printf("\n%lf°C",temp[j]);
        }
        break;
        //printing the list of the temperatures in case the char is 'p'
        case 't':
        printf("The list of the temperatures in Fahrenheit is: ");
        for(int j=0; j<n;j++){
            printf("\n%lf°F",(temp[j]*9/5)+32);
        }
        break;
        //printing the list of the temps in F° in case the char is 't'
        default:
        for(int j=0; j<n;j++){
            sum+= temp[j];
        }
        printf("The average of all temperatures is: %lf", sum/n);
        //printing the average of the temperatures in the case of another char
    }
    return 0;
}