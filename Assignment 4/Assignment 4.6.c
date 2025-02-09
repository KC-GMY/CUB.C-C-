/* CH-230-A
a4_p6.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>
#include <stdlib.h>

//receives the array and its dimension, prints the two largest numbers
void max(int *ptr_int,int n){
    //declaring 3 integers
    int max1=ptr_int[1];
    int max2=ptr_int[0];
    int temp;
    if(max1<max2){
        //swaping values
        temp=max1;
        max1=max2;
        max2=temp;
    }
    //changing the values of the max values
    for(int i=2;i<n;i++){
        if(ptr_int[i]>max1){
            max2=max1;
            max1=ptr_int[i];
        }
        else if(ptr_int[i]>max2){
            max2=ptr_int[i];
        }
    }
    printf("The two largest numbers of the array are: %d and %d.",max1,max2);
}
int main(){
    //declaring and reading an integer n from the user input
    //allocating memory for an array of n integer, reading from the user input
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int *ptr_int=(int*) malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        printf("Enter a number: ");
        scanf("%d",&ptr_int[i]);
    }
    //calling the max function
    max(ptr_int,n);
    //releasing the memory
    free(ptr_int);
    return 0;
}