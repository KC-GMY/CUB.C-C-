/* CH-230-A
a3_p7.c
Omar Benmoussa
obenmoussa@constructor.university*/
#include <stdio.h>

void print_form(int n, int m, char c);
//prototype of the fonction
int main (){
    int n,m;
    char c;
    //declaring two integers and one char
    printf("Enter the value of the two integers: ");
    scanf("%d",&n);
    getchar();
    scanf("%d",&m);
    printf("Enter the character: ");
    getchar();
    scanf("%c",&c);
    //reading two integers and one char from the user input
    print_form(n,m,c);
    //calling the fonction
    return 0;
}
void print_form(int n, int m, char c){
    for(int i=0;i<n;i++){
        for(int j=0; j<m+i;j++){
            printf("%c",c);
        }
        printf("\n");
    }
    //nested loop to print a trapezoid of height n, bases m and m+n-1
}
//receive 2 int and 1 char and prints a trapezoid