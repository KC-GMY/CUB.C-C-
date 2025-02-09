/* CH-230-A
a3_p3.c
Omar Benmoussa
obenmoussa@constructor.university*/
#include <stdio.h>
#include <math.h>

float convert(int cm){
   float km=cm*pow(10,-5);
   return km;
}
//takes an integer in cm, convert it to km and return the float
int main(){
   int cm;
   float km;
   //declaring an integer and a float variable
   printf("Enter the length: ");
   scanf("%d",&cm);
   //reading an integer from the user input
   km=convert(cm);
   //calling the fonction
   printf("Result of conversion: %f",km);
   //printing the result
   return 0;
}