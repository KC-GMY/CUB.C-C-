/* CH-230-A
a3_p2.c
Omar Benmoussa
obenmoussa@constructor.university*/
#include <stdio.h>
int main (){
    char ch;
    int n;
    //declaring a char and integer
    printf("Enter the character: ");
    scanf("%c",&ch);
    scanf("%c");
    printf("Enter the value of the integer n: ");
    scanf("%d",&n);
    //reading a lowercase char and an integer from the user input
    for(int i=0;i<=n;i++){
        printf("%c\n", ch-i);
    }
    //printing the characters ch ch-1...ch-n
    return  0;
}