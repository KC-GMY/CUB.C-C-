/* CH-230-A
a8_p5.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    //declaring a string and integer
    char buffer[3];
    int a=0;
    //opening two file and checking if it was successfull
    FILE *pF=fopen("chars.txt", "r");
    FILE *sum=fopen("codesum.txt","w");
    if (pF==NULL){
        printf("This file doesn't exist");
        fclose(sum);
        exit (1);
    }
    else if(sum==NULL){
        printf("This file doesn't exist");
        fclose(pF);
        exit (1);
    }
    //reading the first two characters from the first file
    fgets(buffer, sizeof(buffer), pF);
    //calculating the sum of their ASCII codes
    for(int i=0;i<2;i++){
        a+=(int)buffer[i];
    }
    //writing the sum of the ASCII code values as number
    fprintf(sum, "The sum of their ASCII code is: %d",a);
    //closing the files
    fclose(pF);
    fclose(sum);
    return 0;
}