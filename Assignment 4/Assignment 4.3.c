/* CH-230-A
a4_p3.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>

//prototype of the geometric mean fonction
float geometric_mean(float arr[], int num);

//receives an array of floats and dimension, prints the highest number
void high_arr(float arr[], int num){
    float Max=arr[0];
        for(int j=1;j<=num;j++){
            if(arr[j]>Max){
                Max=arr[j];
            }
        }
    printf("The largest number in the array is: %f", Max);
}

//receives an array of floats and dimension, prints the smallest number
void small_arr(float arr[], int num){
    float Min=arr[0];
        for(int j=1;j<=num;j++){
            if(arr[j]<Min){
                Min=arr[j];
            }
        }
    printf("The smallest number in the array is: %f", Min);
}

//receives an array of floats and dimension, prints the sum
void sum_arr(float arr[],int num){
    float sum;
        for(int v=0;v<=num;v++){
            sum+= arr[v];
        }
        printf("The sum of all elements in the array is: %f", sum);
}

int main(){
    //declaring an int and array of floats
    int num=15;
    float arr[num];
    //reading max of 15 floats and break if neg float is entered
    for(int i=0;i<15;i++){
        printf("Enter the float value: ");
        scanf("%f",&arr[i]);
        if(arr[i]<0){
            num=i-1;
            break;
        }
    }
    //declaring and reading a character from the user input
    char s;
    printf("Enter a character: ");
    getchar();
    scanf("%c",&s);
    switch(s){
        //computing, printing the geometric mean of the array if m is entered
        case'm':
        printf("The array's geometric mean is: %f", geometric_mean(arr,num));
        break;
        //printing the highest number in the array if h is entered
        case'h':
        high_arr(arr,num);
        break;
        //printing the smallest number in the array if l is entered
        case'l':
        small_arr(arr,num);
        break;
        //printing the sum of all elements in the array if s is entered
        case's':
        sum_arr(arr,num);
    }
    return 0;
}
//receives an array of floats and dimension, returns the gmean of its elements
float geometric_mean(float arr[], int num){
    float gmean=1;
    for(int d=0;d<=num;d++){
        gmean= gmean *arr[d];
    }
    return gmean;
}
