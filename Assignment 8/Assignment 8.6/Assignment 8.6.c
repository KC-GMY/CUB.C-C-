/* CH-230-A
a8_p6.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    //declaring two double
    double bf1;
    double bf2;
    //opening three files
    FILE *pF=fopen("D1.txt", "r");
    FILE *pP=fopen("D2.txt", "r");
    FILE *cmp=fopen("results.txt", "w");
    //checking if the opening was successfull
    if (pF==NULL) {
        printf("This file doesn't exist\n");
        fclose(pP);
        fclose(cmp);
        exit(1);
    }
    else if(pP==NULL){
        printf("This file doesn't exist\n");
        fclose(pF);
        fclose(cmp);
        exit(1);
    }
    else if(cmp==NULL){
        printf("This file doesn't exist\n");
        fclose(pF);
        fclose(pP);
        exit(1);
    }
    //reading two doubles from the first two files
    fscanf(pF,"%lf",&bf1);
    fscanf(pP,"%lf",&bf2);
    //writing the sum, diff, prod and division of the two in the 3rd file
    fprintf(cmp,"Sum = %lf\nDifference = %lf\n",bf1+bf2,bf1-bf2);
    fprintf(cmp,"Product = %lf\nDivision= %lf",bf1*bf2,bf1/bf2);
    //closing the files
    fclose(pF);
    fclose(pP);
    fclose(cmp);
    return 0;
}