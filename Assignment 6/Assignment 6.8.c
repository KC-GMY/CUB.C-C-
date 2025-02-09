/* CH-230-A
a6_p8.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>
#include <stdlib.h>

//defining the structure for a linked list
struct list {
    int info;              
    struct list* next;     
};

//receives a list, int, puts the int as the last term
void add_end(struct list** list, int n) {
    struct list* newel = malloc(sizeof(struct list));
    newel->info = n;
    newel->next = NULL;

    if (*list == NULL) {
        //making newel the first term if list is empty
        *list = newel; 
        return;
    }

    struct list* t = *list;
    while (t->next != NULL) {
        t = t->next; 
    }
    t->next = newel;
}

//receives a list, int, puts the int as the first term
void add_beg(struct list** list, int n) {
    struct list* newel = malloc(sizeof(struct list));
    newel->info = n;
    newel->next = *list;
    *list = newel;       
}

//receives a list, removes the first term
void remove_(struct list** list) {
    if (*list == NULL) return; 
    struct list* t = *list; 
    *list = (*list)->next;  
    //free the memory   
    free(t);                 
}

//receives a list and prints it
void printlist(struct list* list) {
    struct list* t = list;
    while (t != NULL) {
        printf("%d ", t->info);
        t = t->next;             
    }
    printf("\n");
}

//receives a list and free its memory
void freelist(struct list** list) {
    struct list* t;
    while (*list != NULL) {
        t = *list;
        *list = (*list)->next;  
        //free the first term
        free(t);              
    }
}

int main() {
    //declaring and initializing the linked list
    struct list* my_list = NULL; 
    char c;
    int n;

    //looping until statement is false 
    while (1) {
        printf("Enter a character: ");
        scanf(" %c", &c); 
        //switch statement
        switch (c) {
            case 'a':
                printf("Enter number: ");
                scanf("%d", &n);
                add_end(&my_list, n);
                break;
            case 'b':
                printf("Enter number: ");
                scanf("%d", &n);
                add_beg(&my_list, n);
                break;
            case 'r':
                remove_(&my_list);
                break;
            case 'p':
                printlist(my_list);
                break;
            case 'q':
                freelist(&my_list);
                return 0;
            default:
                break;
        }
    }
    return 0;
}