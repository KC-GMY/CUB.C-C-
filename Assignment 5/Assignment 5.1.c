/* CH-230-A
a5_p1.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>

//receives an int, char and prints a triangle of the char
void print_tr(int n, char ch){
//nested loop to print the triangle
    for(int i=0;i<n;i++){
        for(int j=n-i;j>0;j--){
            printf("%c",ch);
        }
        printf("\n");
    }
}

int main(){
    //declaring and reading an int and char from the user input
    int n;
    char ch;
    printf("Enter an integer: ");
    scanf("%d",&n);
    getchar();
    printf("Enter a character: ");
    scanf("%c",&ch);
    getchar();
    //calling the function
    print_tr(n,ch);
    return 0;
}