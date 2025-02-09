/* CH-230-A
a3_p8.c
Omar Benmoussa
obenmoussa@constructor.university*/
#include <stdio.h>
float sigma(float nbr[], int i){
    float sum;
    for(int j=0;j<i; j++){
        sum+=nbr[j];
    }
    //loops to compute the sum of the float
    return sum;
}
//receives the array, the number of floats and returns the sum
float average(float nbr[], int i){
    float avg, sum;
    for(int j=0;j<i; j++){
        sum+=nbr[j];
    }
    avg=sum/i;
    //loops to compute the sum then divide it by the number of floats
    return avg;
}
//receives the array, the number of floats and returns the average
int main(){
    int i=0;
    float nbr[9];
    //declaring an int and an array of 10 doubles
    do{
        printf("Enter the floats: ");
        scanf("%f",&nbr[i]);
        if(nbr[i]== -99.0)
            break;
        i++;
    }while(i<=9);
    //reading 10 numbers max from the user input unless -99.0 is entered
    printf("The sum of the values is: %f\n", sigma(nbr,i));
    printf("The average of the values is: %f",average(nbr,i));
    //calling the two fonctions and printing the results
    return 0;
}