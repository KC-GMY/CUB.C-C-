/* CH-230-A
a4_p4.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>
#include <string.h>

//receives a string and return the number of consonants in it
int count_consonants(char str[]){
    int num;
    for(int i=0;i<strlen(str);i++){
        if(str[i]!='a'&& str[i]!='e' &&
           str[i]!='i'&& str[i]!='o' &&
           str[i]!='u'&& str[i]!='y' &&
           str[i]!='A'&& str[i]!='E' &&
           str[i]!='I'&& str[i]!='O' &&
           str[i]!='U'&& str[i]!='Y' &&
           str[i]!=' '
           ){
            num++;
           }
    }
    return num;
}

int main (){
    //declaring a string of max 100 characters
    char str[100];
    //reading strings from the user input until its string length=0
    do{
        printf("Enter a string: ");
        fgets(str, sizeof(str), stdin);
        str[strlen(str)-1]=0;
        if(strlen(str)==0)
            break;
        else{
            //printing the number of consonants by calling the function
            printf("Number of consonants=%i\n",count_consonants(str));
        }
    }while(1);
    return 0;
}