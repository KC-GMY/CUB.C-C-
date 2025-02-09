/* CH-230-A
a6_p9.c
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
struct list* add_at_end(struct list* my_list, int value) {
    struct list* newel = (struct list*)malloc(sizeof(struct list));
    if (newel == NULL) {
        printf("Error allocating memory\n");
        return my_list;
    }
    newel->info = value;
    newel->next = NULL;

    // If the list is empty, the new element is first
    if (my_list == NULL) {
        return newel;
    }

    //Insert the new element at the end
    struct list* temp = my_list;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newel;
    return my_list;
}

//receives a list, int, puts the int as the first term
struct list* add_beg(struct list* my_list, int value) {
    struct list* newel = (struct list*)malloc(sizeof(struct list));
    if (newel == NULL) {
        printf("Error allocating memory\n");
        return my_list;
    }
    newel->info = value;
    newel->next = my_list;
    return newel;
}

//receives a list, removes the first term
struct list* remove_first(struct list* my_list) {
    if (my_list == NULL) {
        printf("List is empty, nothing to remove.\n");
        return my_list;
    }

    struct list* temp = my_list;
    my_list = my_list->next;
    free(temp);
    return my_list;
}

//receives a list and prints it
void print_list(struct list* my_list) {
    if (my_list == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct list* temp = my_list;
    while (temp != NULL) {
        printf("%d ", temp->info);
        temp = temp->next;
    }
    printf("\n");
}

//receives a list and free its memory
void free_list(struct list* my_list) {
    struct list* temp;
    while (my_list != NULL) {
        temp = my_list;
        my_list = my_list->next;
        free(temp);
    }
}

//receives a list, int, pos and insert the value at the given position
struct list* insert_pos(struct list* my_list, int position, int value) {
    if (position < 0) {
        printf("Invalid position!\n");
        return my_list;
    }

    struct list* newel = (struct list*)malloc(sizeof(struct list));
    if (newel == NULL) {
        printf("Error allocating memory\n");
        return my_list;
    }
    newel->info = value;

    if (position == 0) {
        newel->next = my_list;
        return newel;
    }

    struct list* temp = my_list;
    // Traverse to the (position-1)th element or until the end of the list
    for (int i = 0; i < position - 1; i++) {
        if (temp == NULL) {
            printf("Invalid position!\n");
            free(newel);
            return my_list;
        }
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid position!\n");
        free(newel);
        return my_list;
    }

    newel->next = temp->next;
    temp->next = newel;

    return my_list;
}

//receives a list and reverse
struct list* reverse_list(struct list* my_list) {
    struct list *prev = NULL, *current = my_list, *next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev; 
        prev = current;    
        current = next;     
    }

    return prev;
}

int main() {
    struct list* my_list = NULL;
    char d;
    int value, position;

    do {
        printf("Enter command: ");
        scanf(" %c", &d);

        switch (d) {
            case 'a': // Add to the end
                printf("Enter a number: ");
                scanf("%d", &value);
                my_list = add_at_end(my_list, value);
                break;

            case 'b': // Add to the beginning
                printf("Enter a number: ");
                scanf("%d", &value);
                my_list = add_beg(my_list, value);
                break;

            case 'r': // Remove the first element
                my_list = remove_first(my_list);
                break;

            case 'i': // Insert at a specific position
                printf("Enter position and number: ");
                scanf("%d %d", &position, &value);
                my_list = insert_pos(my_list, position, value);
                break;

            case 'R': // Reverse the list
                my_list = reverse_list(my_list);
                break;

            case 'p': // Print the list
                print_list(my_list);
                break;

            case 'q': // Free memory and quit
                free_list(my_list);
                printf("Exiting the program.\n");
                break;

            default:
        }
    } while (d != 'q');

    return 0;
}
