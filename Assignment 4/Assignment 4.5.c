/* CH-230-A
a4_p5.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>
#include <string.h>

//receives a string and return the number of consonants in it
int count_consonants(char str[]){
    int num;
    for(char *arr_ptr=&str[0]; *arr_ptr!= '\n';*(arr_ptr++)){
        if(*arr_ptr!='a'&& *arr_ptr!='e' &&
           *arr_ptr!='i'&& *arr_ptr!='o' &&
           *arr_ptr!='u'&& *arr_ptr!='y' &&
           *arr_ptr!='A'&& *arr_ptr!='E' &&
           *arr_ptr!='I'&& *arr_ptr!='O' &&
           *arr_ptr!='U'&& *arr_ptr!='Y' &&
           *arr_ptr!=' '
           ){
            num++;
           }
    }
    return num;
}

int main (){
    //declaring a string of max 100 characters
    char str[100];
    //reading strings from the user input until its string length=1
    do{
        printf("Enter a string: ");
        fgets(str, sizeof(str), stdin);
        if(strlen(str)==1)
            break;
        else{
            //printing the number of consonants by calling the function
            printf("Number of consonants=%i\n",count_consonants(str));
        }
    }while(1);
    return 0;
}