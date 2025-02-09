/* CH-230-A
a7_p6.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>
#include <string.h>

//Defining the person struct
struct person{
    char name[30];
    int age;
};

//receive two persons and compare based on alphabetical order of their names
int cmp_name(const void *a,const void *b){
    struct person *prs1=(struct person*)a;
    struct person *prs2=(struct person*)b;
    int name_cmp=strcmp(prs1->name,prs2->name);
    if (name_cmp==0) {
        //If they have the same name, comparing their names
        return prs1->age-prs2->age;
    }
    return name_cmp;
}

//receives two persons and compares them based on their age
int cmp_age(const void *a,const void *b){
    struct person *prs1=(struct person*)a;
    struct person *prs2=(struct person*)b;
    if (prs1->age==prs2->age) {
        //If they have the same age, comparing their names
        return strcmp(prs1->name,prs2->name);
    }
    return prs1->age-prs2->age;
}

//receive array of struct,int,pointer to a comparison function,swap values
void bubble_sort(struct person arr[],int n,int(*compare)(const void *, const void *)){
    int swapped;
    struct person temp;

    do{
        swapped = 0;
        for (int i=0; i<n-1;i++){
            if (compare(&arr[i], &arr[i+1])>0) {
                //swapping the 1st element with the second one
                temp = arr[i];
                arr[i]=arr[i+1];
                arr[i + 1] = temp;
                swapped=1;
            }
        }
    }while(swapped);
}

//receives the struct and prints the elements
void print_struct(struct person arr[],int n){
    for (int i=0; i<n;i++) {
        printf("{%s, %d}; ",arr[i].name,arr[i].age);
    }
    printf("\n");
}

int main(){
    //declaring and reading an int from the user input
    int n;
    printf("Enter an integer:");
    scanf("%d", &n);
    //allocating memory for the struct array
    struct person arr[n];
    //reading its elements from the user input
    for (int j=0;j<n;j++) {
        printf("Enter a name and an integer: ");
        scanf("%s", arr[j].name);
        scanf("%d", &arr[j].age);
    }
    //calling the functions to compare by name
    bubble_sort(arr, n, cmp_name);
    print_struct(arr, n);
    //calling the functions to compare by age
    bubble_sort(arr, n, cmp_age);
    print_struct(arr, n);
    return 0;
}