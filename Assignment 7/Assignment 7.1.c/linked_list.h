/* CH-230-A
linked_list.h
Omar Benmoussa
obenmoussa@constructor.university*/

//defining the structure for a linked list
struct list {
    int info;              
    struct list* next;     
};

//prototype to the add_end function
void add_end(struct list** list, int n);

//prototype to the add_beg function
void add_beg(struct list** list, int n);

//prototype to the remove_ function
void remove_(struct list** list);

//prototype to the printlist function
void printlist(struct list* list);

//prototype to the freelist function
void freelist(struct list** list);