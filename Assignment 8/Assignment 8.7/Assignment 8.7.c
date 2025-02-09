/* CH-230-A
a8_p7.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    //declaring two string to store lines
    char bf1[256];
    char bf2[256];
    //opening three files
    FILE *txt1=fopen("text1.txt","r");
    FILE *txt2=fopen("text2.txt","r");
    FILE *merge=fopen("merge12.txt","w");
//checking if the opening was successfull
    if(txt1==NULL){
        printf("This file doesn't exist!");
        fclose(txt2);
        fclose(merge);
        exit (1);
    }
    else if(txt2==NULL){
        printf("This file doesn't exist!");
        fclose(merge);
        fclose(txt1);
        exit (1);
    }
    else if(merge==NULL){
        printf("This file doesn't exist!");
        fclose(txt1);
        fclose(txt2);
        exit (1);
    }
    //reading the content of two first files and writing in the third one
    while (fgets(bf1,sizeof(bf1),txt1)!=NULL)
    {
        fprintf(merge,"%s",bf1); 
    }
    fprintf(merge,"\n");
    while (fgets(bf2,sizeof(bf2),txt2)!=NULL)
    {
        fprintf(merge,"%s",bf2);
    }
    //closing the files
    fclose(merge);
    fclose(txt1);
    fclose(txt2);
    return 0;
}