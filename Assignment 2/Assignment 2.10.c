/* CH-230-A
 a2_p10.c
 Omar Benmoussa
 obenmoussa@constructor.university*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    //reading the integer from the user input
    while(n<=0){
     printf("Enter the value of n: ");
    scanf("%d", &n);
    //printing the same message until n is greater than 0
    }
    printf("1 day = 24 hours");
    for(int i=2; i<=n; i++){
        printf("\n%d days = %d hours", i, i*24);
    }
    //printing the conversion table for 1 to n days using a for loop
    return 0;
}