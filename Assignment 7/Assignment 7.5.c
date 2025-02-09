/* CH-230-A
a7_p5.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>
#include <stdlib.h>

//receives two integers and returns their difference 1st-2nd
int comp_asc(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

//receives two integers and returns their difference 2nd-1st
int comp_desc(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main(){
    //declaring an int, int pointer and a char
    int n;
    int *arr;
    char c;
    //reading an int from the user input
        printf("Enter an integer: ");
        scanf("%d", &n);
        //Allocating memory for the array and reading its elements
        arr=(int*)malloc(n*sizeof(int));
        printf("Enter %d integers: ",n);
        for(int i=0;i<n;i++) {
            scanf("%d", &arr[i]);
        }
    while (1) {
        //reading a char from the user input
        scanf("%c",&c);
        switch(c){
            case'a':
            //calling the ascending sorting function if a is the input
            qsort(arr,n,sizeof(int),comp_asc);
            //printing the sorted integers
            for (int i=0;i<n;i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;
            case 'd':
            //calling the descending sorting function if d is the input
            qsort(arr, n, sizeof(int), comp_desc);
            //printing the sorted integers
            for (int i=0;i<n;i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;
            case 'e':
            //freeing memory and exiting the execution if e is the input
            free(arr);
            exit (0);
        }
    }

    return 0;
}