/* CH-230-A
linked_list.c
Omar Benmoussa
obenmoussa@constructor.university*/

//includes the header file
#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

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