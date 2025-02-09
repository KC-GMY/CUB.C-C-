#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void intialize_queue(Queue *a){
 a->front=a->rear=NULL;
 a->items=0;
}

int queue_is_empty(Queue *a){
 return a->items;
}

int queue_is_full(Queue *a){
 return pq->items ==MAXQUEUE;
}

int enqueue(Item num,Queue *a){
 Node* b=(Node*)malloc(sizeof(Node));
 if(b==NULL){
  exit(1);
 }
 a->Item=num;
 a->next=NULL;
 if(queue_is_empty(a)){
  a->front=b;
 }
 else{
  a->rear->next=b;
 }
 a->rear=b;
 a->items++;
 return 0;
}

int dequeue(Item *num,Queue *a){
 if(queue_is_empty(a)){
  return -1;
 }
 Node *temp=a->front;
 *Item=temp->item;
 a->front=a->front->next;
 if (pq->front==NULL) {
  pq->rear=NULL;
 }
 free(temp);
 a->items--;
 return 0;
}

void print(Queue *a){
 Node *t=a->front;
 if (queue_is_empty(pq)) {
        printf("The queue is empty.\n");
        return;
    }
    printf("content of the queue: ");
 while(t!=NULL){
  printf("%d",t->info);
  t=t->next;
 }
}

void clear(Queue *a){
 Item dummy;
 while(!queue_is_empty(pq)){
  dequeue(&dummy,a);
 }
}