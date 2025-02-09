/* CH-230-A
a5_p8.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>
#include <stdlib.h>

//reads a matrice from the user input
void read(int **X,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("Enter the integer: ");
            scanf("%d",&X[i][j]);
        }
    }
}

//receives a matrice and prints it
void print(int **X,int n,int m){
    for(int u=0;u<n;u++){
        for(int v=0;v<m;v++){
            printf("%d ",X[u][v]);
        }
        printf("\n");
    }
}
//receives 3 matrices, dimensions computes the product of the first two
void prod(int **X,int **Y,int **Z,int n,int m,int p){
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            Z[i][j]=0;
            for(int v=0;v<m;v++){
            Z[i][j]+=X[i][v]*Y[v][j];
            }
        }
    }
}

int main (){
    //declaring and reading three integers from the user input
    int n,m,p;
    printf("Enter the three integers: ");
    scanf("%d",&n);
    getchar();
    scanf("%d",&m);
    getchar();
    scanf("%d",&p);
    getchar();
    //dynamically allocating memory for three matrices
    int **Am=(int**)malloc(sizeof(char*)*n);
    for(int i=0;i<n;i++){
        Am[i]=(int*)malloc(sizeof(int)*m);
    }
    int **Bm=(int**)malloc(sizeof(char*)*m);
    for(int j=0;j<m;j++){
        Bm[j]=(int*)malloc(sizeof(int)*p);
    }
    int **AB=(int**)malloc(sizeof(char*)*n);
    for(int v=0;v<n;v++){
        AB[v]=(int*)malloc(sizeof(int)*p);
    }
    if(Am==NULL)
    exit (1);
    else if(Bm==NULL)
    exit (1);
    else if(AB==NULL)
    exit(1);
    //calling the functions 
    read(Am,n,m);
    printf("Matrix A: \n");
    print(Am,n,m);
    read(Bm,m,p);
    printf("Matrix B: \n");
    print(Bm,m,p);
    printf("The multiplication result AxB: \n");
    prod(Am,Bm,AB,n,m,p);
    print(AB,n,p);
    //deallocating the memory address
    for(int i=0;i<n;i++){
        free(Am[i]);
    }
    free(Am);
    for(int i=0;i<m;i++){
        free(Bm[i]);
    }
    free(Bm);
    for(int i=0;i<n;i++){
        free(AB[i]);
    }
    free(AB);
    return 0;
}