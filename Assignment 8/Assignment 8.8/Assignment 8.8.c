/* CH-230-A
a8_p8.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    //declaring a string, char, 2 int and initializing them
    char fname[256];
    char bf;
    int count=0;
    int word=0;
    //reading the string from the user input
    printf("Enter a file name: ");
    fgets(fname,sizeof(fname),stdin);
    fname[strlen(fname)-1]=0;
    //opening a file and checking if it was successfull
    FILE *pF=fopen(fname,"r");
    if(pF==NULL){
        printf("This file doesn't exist!");
        exit (1);
    }
    //counting the number of words
    while((bf=fgetc(pF))!=EOF){
        if((bf==' '||bf==','||bf=='?'
        ||bf=='!'||bf=='.'||bf=='\t'
        ||bf=='\r'||bf=='\n')&& word==1){
            if (word == 1) {
                count++;
            }
            word=0;
        }
        else
        word=1;
    }
    if(word==1){
        count++;
    }
    //printing the number of words in the file
    printf("The file contains %d words.",count);
    //closing the file
    fclose(pF);
    return 0;
}