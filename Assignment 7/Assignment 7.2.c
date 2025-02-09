/* CH-230-A
a7_p2.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>
#include <stdlib.h>

//defining the struct for a linked list
typedef struct list1 {
    char info;
    struct list1* aft;
    struct list1* bfr;
} list1;

//defining the doubly linked list struct
typedef struct DoublyLinkedList {
    list1* top;
} DoublyLinkedList;

//creating a new node
list1* createNode(char info) {
    list1* newNode = (list1*)malloc(sizeof(list1));
    if (!newNode) {
        exit(0);
    }
    newNode->info=info;
    newNode->aft=NULL;
    newNode->bfr=NULL;
    return newNode;
}

//initializing the doubly linked list
DoublyLinkedList* createList() {
    DoublyLinkedList* list = (DoublyLinkedList*)malloc(sizeof(DoublyLinkedList));
    if (!list) {
        exit(0);
    }
    list->top = NULL;
    return list;
}

//receives the list, char, adds the char at the beginning of the list
void add_chr(DoublyLinkedList* list, char info) {
    list1* newNode = createNode(info);
    if (list->top) {
        newNode->aft = list->top;
        list->top->bfr = newNode;
    }
    list->top = newNode;
}

//receives a list, char, removes all occurrences of the char from the list
void rmv_chr(DoublyLinkedList* list, char info) {
    list1* current = list->top;
    int found = 0;

    while (current) {
        if (current->info == info) {
            found = 1;
            if (current->bfr) {
                current->bfr->aft = current->aft;
            } else {
                list->top = current->aft;
            }
            if (current->aft) {
                current->aft->bfr = current->bfr;
            }
            list1* temp = current;
            current = current->aft; 
            free(temp);
        } else {
            current = current->aft;
        }
    }

    if (!found) {
        printf("The element is not in the list!\n");
    }
}

//receives the list, prints it from top to bottom
void print(DoublyLinkedList* list) {
    list1* current = list->top;
    while (current) {
        printf("%c ", current->info);
        current = current->aft;
    }
    printf("\n");
}

//receives the list, prints it from bottom to top
void print_rvs(DoublyLinkedList* list) {
    if (!list->top) {
        printf("The list is empty!\n");
        return;
    }
    list1* current = list->top;
    while (current->aft) {
        current = current->aft;
    }
    while (current) {
        printf("%c ", current->info);
        current = current->bfr;
    }
    printf("\n");
}

//receives the list, frees its memory, and exits the execution
void clearList(DoublyLinkedList* list) {
    list1*current=list->top;
    list1*nextNode;

    while (current) {
        nextNode = current->aft;
        free(current);
        current = nextNode;
    }
    free(list);
}

int main() {
    // Declaring an int and char and creating the list
 DoublyLinkedList* list = createList();
    int cmd;
    char c;

    while (1) {
        printf("Enter an integer: ");
        scanf("%d",&cmd);
        getchar();
        switch (cmd) {
            case 1:
                //reading a character from user input and adding it to the list
                printf("Enter a character: ");
                scanf("%c", &c);
                add_chr(list,c);
                break;
            case 2: 
                //reading a character from user input and removing it from the list
                printf("Enter a character: ");
                scanf("%c",&c);
                rmv_chr(list,c);
                break;
            case 3:
                //printing the list
                print(list);
                break;
            case 4: 
                //printing the list backwards
                print_rvs(list);
                break;
            case 5:
                //freeing the memory and exiting the execution
                clearList(list);
                return 0;
        }
    }

    return 0;
}