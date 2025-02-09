/* CH-230-A
a2_p3.c
Omar Benmoussa
obenmoussa@constructor.university*/
#include <stdio.h>
int main(){
   int ws, ds, hs;
   printf("Enter a number of weeks: ");
   scanf("%d", &ws);
   printf("Enter a number of days: ");
   scanf("%d", &ds);
   printf("Enter a number of hours: ");
   scanf("%d", &hs);
   //reading the number of weeks, days and hours from the user input
   printf("The total number of hours is: %d", ws*24*7+ds*24+hs);
   //pinting the number of hours after convertion
   return 0;
}