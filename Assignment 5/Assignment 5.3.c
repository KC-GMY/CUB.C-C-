/* CH-230-A
a5_p3.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>
#include <string.h>

//receives a pointer to an array, returns the number of lowercases
int count_lower(char* str){
    //declaring an int
    int count=0;
    //for loop to count the number of lowercases
    for(int i=0; i<strlen(str);i++){
        if(str[i]>=97 && str[i]<=122){
            count++;
        }
    }
    return count;
}

int main (){
    //declaring a string
    char str[50];
    //reading it from the user input until the length is 0
    do{
    printf("Enter your string: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]=0;
    if((strlen(str))==0)
        break;
    //printing the number of lowercases by calling the function
    printf("The number of lowercases is: %d\n",count_lower(str));
    }while(1);
    return 0;
}