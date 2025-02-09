/* CH-230-A
a7_p4.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//receives a string and prints it in uppercase
void opp1(char str[]){
    for (int i=0;i<strlen(str);i++) {
        printf("%c",toupper(str[i]));
    }
    printf("\n");
}
//receives a string and prints it in lowercase
void opp2(char str[]){
    for (int i=0;i<strlen(str);i++) {
        printf("%c",tolower(str[i]));
    }
    printf("\n");
}
//receives a string and prints the lowercase as uppercase and upper as lower
void opp3(char str[]){
    for(int i=0;i<strlen(str);i++){
        if(isupper(str[i])){
            printf("%c",tolower(str[i]));
        }
        else{
            printf("%c",toupper(str[i]));
        }
    }
    printf("\n");
}
//quits the execution
void opp4(char str[]){
    exit (0);
}

int main(){
    //declaring and reading a string from the user input, declaring an int
    char str[100];
    int c;
    printf("Enter a string: ");
    fgets(str,100,stdin);
    str[strlen(str)-1]=0;
    //declaration of an array of function pointers
    void (*opp[])(char[])={opp1,opp2,opp3,opp4};
    while(1){
        printf("Enter an integer: ");
        scanf("%d",&c);
        //calling the function according to the int input
        opp[c-1](str);
    }
    return 0;
}