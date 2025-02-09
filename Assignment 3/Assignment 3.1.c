/* CH-230-A
 a3_p1.c
 Omar Benmoussa
 obenmoussa@constructor.university*/
#include <stdio.h>
int main (){
    float x;
    int n;
    printf("Enter the value of the float x: ");
    scanf("%f",&x);
    printf("Enter the value of the integer n: ");
    scanf("%d", &n);
    //reading a float and integer from the user input
    while(n<=0){
        printf("Input is invalid, reenter value ");
        scanf("%d",&n);
    }
    //asking for a valid int if n hasn't a valid integer value
    for(int i=0; i<n; i++){
        printf("%f\n",x);
    }
    //printing x n times
    return 0;
}