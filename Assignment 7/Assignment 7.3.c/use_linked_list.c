/* CH-230-A
use_linked_list.c
Omar Benmoussa
obenmoussa@constructor.university*/

//includes the header file
#include <stdio.h>
#include "linked_list.h"

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