/* CH-230-A
a5_p4.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>
#include <stdlib.h>

//receives pointer to array of floats, dimension, divide the elements by 5
void divby5(float* arr, int size){
    for(int v=0;v<size;v++){
        arr[v]= arr[v]/5;
    }
}

int main(){
    //declaring and reading an int from the user input
    int n;
    printf("Enter an integer: ");
    scanf("%d",&n);
    //allocating memory to an array of n floats
    float *arr=(float*)malloc(sizeof(float)*n);
    if(arr==NULL)
    exit (1);
    //for loop to read the float values from the user input
    for(int u=0;u<n;u++){
        printf("Enter your value: ");
        scanf("%f",&arr[u]);
    }
    //for loop to print the values before
    printf("Before: \n");
    for(int i=0;i<n;i++){
        printf("%.3f ",arr[i]);
    }
    //for loop to print the values after
    printf("\nAfter: \n");
    divby5(arr,n);
    for(int j=0;j<n;j++){
        printf("%.3f ",arr[j]);
    }
    free(arr);
    return 0;
}