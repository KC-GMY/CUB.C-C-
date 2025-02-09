#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>
void add_end(struct list** a,int n){
 struct list* new=malloc(sizeof(list));
 new->info=n;
 new->next=NULL;
 if(*a==NULL){
  *a=new;
 }
 else{
  struct list* t=*list;
  while(t!=NULL){
   t=t->next;
  }
  t->next=new;
 }
}

void add_beg(struct list**a,int n){
 struct list*new=malloc(sizeof(struct list));
 new->info=n;
 new->next=*a;
 *a=new;
}

void remove_(struct list**a){
 struct list* t=*a;
 *a=(*a)->next;
 free(t)
}

void printlist(struct list*a){
 struct list *t=a;
 while(t!=NULL){
  printf("%d",t->info);
  t=t->next;
 }
}

void freelist(struct list**a){
 struct list*t;
 while(a!=NULL){
  t=*a;
  *a=(*a)->next;
  free(t);
 }
}