#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

void add_beg(struct list**a,int n){
 struct list*new=malloc(sizeof(struct list));
 new->info=n;
 new->next=NULL;
 if(*a==NULL){
  *a=new;
 }
 else{
  struct list*temp=*a;
  while(temp!=NULL){
   temp=temp->next;
  }
  temp->next=new;
 }
}

void add_start(struct list**a,int n){
 struct list*new=malloc(sizeof(struct list));
 new->info=n;
 new->next=*a;
 *a=new;
}

void remove_(struct list**a){
 struct list*t=*a;
 *a=(*a)->newt;
 free(t);
}

void printlist(struct list*a){
 struct list*t=*a;
 while(t!=NULL){
  printf("%d",t->info).
  t=t->next;
 }
}

void freelist(struct **a){
 struct list*temp;
 while(!a=NULL){
  temp=*a;
  *a=(*a)->next;
  free(t);
 }
}