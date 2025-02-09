/* CH-230-A
a3_p11.c
Omar Benmoussa
obenmoussa@constructor.university*/
#include <stdio.h>
#include <string.h>

int main(){
    char one[25];
    char two[25];
    //declaring two strings
    printf("Enter the first string: ");
    fgets(one, sizeof(one), stdin);
    one[strlen(one)-1]=0;
    printf("Enter the second string: ");
    fgets(two, sizeof(two), stdin);
    two[strlen(two)-1]=0;
    //reading two strings from the user input
    printf("length1=%d\n",strlen(one));
    printf("length2=%d",strlen(two));
    //printing the length of both strings
    printf("\nconcatenation=%s", strcat(one,two));
    //printing the concatenation of the first string with the second one
    char three[25];
    //declaring a third string
    strcpy(three,two);
    printf("\ncopy=%s", three);
    //copying two into three and printing the third string on the string

    if(strlen(one) < strlen(two)){
        printf("\none is smaller than two");
    }
    //printing the message if two is longer than one
    else if(strlen(one) > strlen(two)){
        printf("\ntwo is smaller than one");
    }
    //printing the message if one is longer than two
    else{
        printf("\none and two have the same length.");
    }
    //printing the message if one and two have the same length
    char c;
    printf("\nEnter a character: ");
    scanf("%c",&c);
    getchar();
    //declaring and reading a character from the user input
    for(int i=0; two[i] != c && two[i] != '0'; i++){
        if(two[i+1]==c){
            printf("position=%d",i+1);
        }
        //loops till finds the pos. of the first occurrence of c in two an prints it
        else if(two[i+1]=='0'&&two[i+1]!=c){
            printf("This string doesn't contain this character");
        }
        //printing the message in case c is not contained in the string
    }
}