/* CH-230-A
a5_p2.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>

//receives an array of floats, dimension, divide the elements by 5
void divby5(float arr[], int size){
    for(int v=0;v<size;v++){
        arr[v]= arr[v]/5;
    }
}

int main(){
    //declaration and initialization of an int and an array of floats
    float arr[]={5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
    int size=sizeof(arr)/sizeof(arr[0]);
    //for loop to print the values before
    printf("Before: \n");
    for(int i=0;i<size;i++){
        printf("%.3f ",arr[i]);
    }
    //for loop to print the values after
    printf("\nAfter: \n");
    divby5(arr,size);
    for(int j=0;j<size;j++){
        printf("%.3f ",arr[j]);
    }
    return 0;
}