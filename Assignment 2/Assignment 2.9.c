/* CH-230-A
 a2_p9.c
 Omar Benmoussa
 obenmoussa@constructor.university*/
#include <stdio.h>
int main(){
    char a;
    //declaration of the character
    printf("Enter a character: ");
    scanf("%c", &a);
    //reading the character from the user input
    getchar();
    if(a>47 && a<58){
        printf("%c is a digit",a);
    //printing if the ASCII code is between 47;58 corresponding to digits
    }
    else if((a>64 && a<91) || (a>96 && a<123)){
        printf("%c is a letter",a);
    //printing if the ASCII code is between 64;91 or 96;123 corresponding to letters
    }
    else{
        printf("%c is some other symbol",a);
    //printing if the ASCII code is out of the previous intervals
    }
    return 0;
}