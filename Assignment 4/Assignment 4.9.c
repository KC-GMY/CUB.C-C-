/* CH-230-A
a4_p9.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>
#include <stdlib.h>

/*receives an array, its dimension, returns 
the product of the largest and smallest element*/
int prodminmax(int arr[], int n){
    int Min=arr[0];
    int Max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>Max){
            Max=arr[i];
        }
        if(arr[i]<Min){
            Min=arr[i];
        }
    }
    return Min*Max;
}

int main(){
    //declaring and reading an integer n from the user input
    //allocating memory for array of n integer, reading from the user input
    int n;
    printf("Enter an integer: ");
    scanf("%d",&n);
    int *arr=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        printf("Enter an integer: ");
        scanf("%d",&arr[i]);
    }
    //printing the retrun value of the function
    printf("The two elements' product is: %d",prodminmax(arr,n));
    //releasing memory
    free(arr);
    return 0;
}