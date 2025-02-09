/* CH-230-A
a5_p9.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>
#include <stdlib.h>

//reads the components of the 3D array from the user input
void readMat(int ***X,int rows,int columns, int depth){
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            for(int k=0;k<depth;k++){
                printf("Enter the integer: ");
                scanf("%d",&X[i][j][k]);
            }
        }
    }
}

//receives a 3D array and prints the 2D sections parrallel to the XOY axis
void printMat(int ***X,int rows, int columns, int depth){
    for(int k=0;k<depth;k++){
        printf("Section %d: \n",k+1);
        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                printf("%d ",X[i][j][k]);
            }
            printf("\n");
        }
    }
}

int main(){
    //declaring and reading 3 integers from the user input
    int rows, columns, depth;
    printf("Enter the number of rows, columns and depth: ");
    scanf("%d",&rows);
    getchar();
    scanf("%d",&columns);
    getchar();
    scanf("%d",&depth);
    getchar();
    //dynamically allocating a 3D array of integers
    int*** XYZ=(int***)malloc(sizeof(int**)*rows);
    for(int i=0;i<rows;i++){
        XYZ[i]=(int**)malloc(sizeof(int*)*columns);
        for(int j=0;j<columns;j++){
            XYZ[i][j]=(int*)malloc(sizeof(int)*depth);
        }
    }
    if(XYZ==NULL)
    exit (1);
    //calling the functions
    readMat(XYZ,rows,columns,depth);
    printMat(XYZ,rows,columns,depth);
    //deallocating the memory
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            free(XYZ[i][j]);
        }
        free(XYZ[i]);
    }
    free(XYZ);
    return 0;
}