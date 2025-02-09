/* CH-230-A
a5_p6.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>
#include <stdlib.h>


int main(){
    //declaring an int and reading it from the user input
    int n;
    printf("Enter an integer: ");
    scanf("%d",&n);
    //allocating memory to a pointer to an array of n floats
    float* arr=(float*)malloc(sizeof(float)*n);
    if(arr==NULL)
    exit (1);
    //for loop to read the float values from the user input
    for(int i=0;i<n;i++){
        printf("Enter your value: ");
        scanf("%f",&arr[i]);
    }
    //printing the number of elements before the first negative one
    if(arr[n-1]<0){
        printf("Before the first negative value: %d elements",n-1);
    }
    else{
    for(float *arr_cnt=arr;arr_cnt!=&arr[n-1];*(arr_cnt)++){
        if(*arr_cnt<0){
            printf("Before the first negative value: %d elements",arr_cnt-arr);
            break;
        }
    }
    }
    free(arr);
    return 0;
}