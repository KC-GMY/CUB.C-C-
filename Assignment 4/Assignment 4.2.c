/* CH-230-A
a4_p2.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>
#include <string.h>

int main (){
    //declaring and reading a string from the user input
    char string[50];
    printf("Enter a string: ");
    fgets(string,sizeof(string),stdin);
    string[strlen(string)-1]=0;
    
    //printing the character depending on its position
    for(int i=0;i<strlen(string);i++){
        if(i%2==0){
            printf("%c\n",string[i]);
        }
        else{
            printf(" %c\n",string[i]);
        }
    }
    return 0;
}