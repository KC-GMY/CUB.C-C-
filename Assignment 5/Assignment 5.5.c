/* CH-230-A
a5_p5.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>
#include <stdlib.h>

//receives two array of doubles, their dimension, returns the scalar product
double scalar_prod(double *v,double *w,int n){
    double scalar=0;
    //for loop to compute the scalar product
    for(int i=0;i<n;i++){
    scalar+= v[i]*w[i];
    }
    return scalar;
}

//receives array,dimension, prints the largest and smallest component
void Min_Maxv(double *v,int n){
    double Maxv=v[0];
    int Maxvpos=0;
    double Minv=v[0];
    int Minvpos=0;
    for(int i=1;i<n;i++){
        if(v[i]>Maxv){
            Maxv=v[i];
            Maxvpos=i;
        }
        else if(v[i]<Minv){
            Minv=v[i];
            Minvpos=i;
        }
    }
    printf("\nThe smallest = %lf",Minv);
    printf("\nPosition of smallest = %d",Minvpos);
    printf("\nThe largest = %lf", Maxv);
    printf("\nPosition of largest = %d",Maxvpos);
}

//receives array,dimension, prints the largest and smallest component
void Min_Maxw(double *w,int n){
    int Maxwpos=0;
    double Minw=w[0];
    int Minwpos=0;
    double Maxw=w[0];
    for(int i=1;i<n;i++){
        if(w[i]>Maxw){
            Maxw=w[i];
            Maxwpos=i;
        }
    else if(w[i]<Minw){
            Minw=w[i];
            Minwpos=i;
        }
    }
    printf("\nThe smallest = %lf",Minw);
    printf("\nPosition of smallest = %d",Minwpos);
    printf("\nThe largest = %lf", Maxw);
    printf("\nPosition of largest = %d",Maxwpos);
}

int main(){
    //declaring an int and reading it from the user input
    int n;
    printf("Enter an integer: ");
    scanf("%d",&n);
    //allocating memory for two pointers to an array of n doubles
    double* v=(double*)malloc(sizeof(double)*n);
    double* w=(double*)malloc(sizeof(double)*n);
    if(w==NULL)
    exit (1);
    else if(v==NULL)
    exit (1);
    //for loop to read the v and w components from the user input
    for(int i=0;i<n;i++){
        printf("Enter the v components: ");
        scanf("%lf",&v[i]);
    }
    for(int j=0;j<n;j++){
        printf("Enter the w components: ");
        scanf("%lf",&w[j]);
    }
    //printing the results by calling the functions
    printf("Scalar product=%lf",scalar_prod(v,w,n));
    Min_Maxv(v,n);
    Min_Maxw(w,n);
    free(v);
    free(w);
    return 0;
}