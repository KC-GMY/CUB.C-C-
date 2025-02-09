/* CH-230-A
a4_p11.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//receives a string, char, returns the number of occurrence in the string
int count_insensitive(char *str, char c){
    int count=0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]==c){
            count++;
        }
    }
    return count;
}

int main(){
    //allocating a string of 50 char and reading it from the user input
    char *str1=(char*)malloc(sizeof(char)*50);
    printf("Enter the string: ");
    fgets(str1,50,stdin);
    str1[strlen(str1)-1]=0;
    //allocating another string with the correct size, copying the first into it
    char *str=(char*)malloc(sizeof(char)*strlen(str1));
    strcpy(str,str1);
    //deallocating the memory of str1
    free(str1);
    //making all the characters of the string lowercases
    *str=tolower(*str);
    //printing the number of occurrence of each character by calling the function
    printf("The character 'b' occurs %d times.\n",count_insensitive(str,'b'));
    printf("The character 'h' occurs %d times.\n",count_insensitive(str,'h'));
    printf("The character '8' occurs %d times.\n",count_insensitive(str,'8'));
    printf("The character 'u' occurs %d times.\n",count_insensitive(str,'u'));
    printf("The character '$' occurs %d times.\n",count_insensitive(str,'$'));
    return 0;
}