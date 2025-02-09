/* CH-230-A
a6_p4.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>
#include <stdlib.h>

#define INTERMEDIATE
//macro to compute and print the scalar product of two vectors
#define SCALAR(X,Y,n){\
                      int sum=0;\
                      for(int i=0;(i<n);(i++)){\
                      sum+=X[i]*Y[i];\
                      }\
                      printf("The scalar product is: %d",sum);\
                      }

int main(){
    //declaring and reading an int from the user input
    int n;
    printf("Enter the dimension of the vectors: ");
    scanf("%d",&n);
    //allocating memory to two vectors
    int *u=(int*) malloc(sizeof(int)*n);
    int *v=(int*) malloc(sizeof(int)*n);
    //reading the vectors componentsfrom the user input
    printf("Enter the first vector components: ");
    for(int i=0;i<n;i++){
        scanf("%d",&u[i]);
    }
    printf("Enter the second vector components: ");
    for(int j=0;j<n;j++){
        scanf("%d",&v[j]);
    }
    //if intermediate is defined the code get executed
    #ifdef INTERMEDIATE
    printf("The intermediate product values are: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", u[i] * v[i]);
        printf("\n");
    }
    #endif
    //calling the function
    SCALAR(u,v,n);
    //free the memory
    free(u);
    free(v);
    return 0;
}