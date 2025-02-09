/* CH-230-A
a4_p12.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>
#include <string.h>

/*receives a string, a char to be replaced, and one to replace
returns a string with replacing the first char*/
void replaceAll(char *str, char c, char e){
    for(int i=0;i<strlen(str);i++){
        if(str[i]==c){
            str[i]=e;
        }
    }
    printf("The new string is: %s\n",str);
}

int main(){
    //declaring two characters and a string with a max of 80 characters
    char stri[80];
    char c;
    char e;
    /*reading the string, two characters from the user input
    and printing the two strings unless the string is "stop" */
    do{
        printf("Enter your string: ");
        fgets(stri, sizeof(stri),stdin);
        stri[strlen(stri)-1]=0;
        if((strcmp(stri, "stop"))==0)
        break;
        printf("Enter the character to be replaced: ");
        scanf("%c",&c);
        getchar();
        printf("Enter the character to replace with: ");
        scanf("%c",&e);
        getchar();
        printf("The old string is: %s\n",stri);
        //calling the function
        replaceAll(stri,c,e);
    }while(1);
    return 0;
}