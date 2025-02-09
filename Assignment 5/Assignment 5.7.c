/* CH-230-A
a5_p7.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    //declaring and reading two strings from the user input
    char one[50];
    char two[50];
    printf("Enter the first string: ");
    fgets(one,50,stdin);
    one[strlen(one)-1]=0;
    printf("Enter the second string: ");
    fgets(two,50,stdin);
    two[strlen(two)-1]=0;
    //dynamically allocating memory to a string and prining it
    char* conce=(char*) malloc(sizeof(char)*(strlen(one)+strlen(two)+1));
    if(conce==NULL)
    exit (1);
    strcpy(conce,strcat(one,two));
    printf("Result of concatenation: %s",conce);
    free(conce);
    return 0;
}