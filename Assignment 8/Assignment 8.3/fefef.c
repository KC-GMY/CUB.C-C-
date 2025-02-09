#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void initialize_queue(Queue *a){
 a->front=a->rear=NULL;
 a->items=0;
}

int queue_is_empty(Queue*a){
 return a->items;
}

int queue_is_full(Queue*a){
 return a->items==MAXQUEUE;
}

int enqueue(Item item,Queue *a){
 Node*new=(Node*)malloc(sizeof(Node));
 new->item=item;
 new->next=NULL;
 if(queue_is_empty(a)){
  a->front=new;
 }
 else{
  a->rear->next=new;
 }
 a->rear=item;
 a->items++;
 return 0;
}

int dequeue(Item *item,Queue *a){
 if(queue_is_empty(a)){
  return -1;
 }
 Node*temp=a->front;
 *item=temp->item;
 a->front=a->front->next;
 free(temp);
 a->items--;
 return 0;
}

void printqueue(Queue *a){
 if(queue_is_empty(a)){
  printf("There is no element in the queue!");
  return -1;
 }
 Node*t=a->front;
 while(t!=NULL){
  printf("%d",t->info);
  t=t->next;
 }
}

void clearqueue(Queue *a){
 Item dummy;
 while(a!=NULL){
  dequeue(&dummy,a);
 }
}