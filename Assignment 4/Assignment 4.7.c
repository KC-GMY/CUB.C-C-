/* CH-230-A
a4_p7.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>

//receives an array of integers and prints the values of the matrix 
void print_arr(int array[][30],int n){
    printf("The entered matrix is: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
}

//receives an array of integers and prints the elements under the main diagonal
void print_udiag(int array[][30],int n){
    printf("Under the main diagonal:\n");
    for(int v=1;v<n;v++){
        for(int u=0;u<v;u++){
            printf("%d ",array[v][u]);
        }
    }
}

int main (){
    //declaring an array of integers of max 30 rows and 30 columns, and integer
    int array[30][30];
    int n;
    printf("Enter the number of rows and columns: ");
    scanf("%d",&n);
    //reading the values of the matrix from the user input
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter the value: ");
            scanf("%d",&array[i][j]);
        }
    }
    //calling the functions
    print_arr(array,n);
    print_udiag(array,n);
    return 0;
}