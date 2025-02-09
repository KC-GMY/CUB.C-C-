/**
* @file queue.c
*/
/* CH-230-A
queue_incomplete.c
Omar Benmoussa
obenmoussa@constructor.university*/

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void initialize_queue(Queue *pq){
	pq->front = pq->rear = NULL;
	pq->items = 0;
}
int queue_is_full(const Queue *pq){
		return pq->items == MAXQUEUE;
	}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq){
	return pq->items;
}

int enqueue(Item item, Queue *pq)
{
	//creating a new node and allocating memory
	Node* newNode=(Node*)malloc(sizeof(Node));		
	if (newNode==NULL) {
		exit(1);
	}
	newNode->item=item;
	newNode->next=NULL;
	//add to the front if the queue is empty
	if (queue_is_empty(pq)) {
    	pq->front = newNode;
    } 
	//add to the end of the queue
	else {
    	pq->rear->next=newNode;
    }
	pq->rear=newNode;
	//increamenting the number of items
	pq->items++;
	return 0;
	}

int dequeue(Item *pitem, Queue *pq){
    //checking if the queue is empty
    if (queue_is_empty(pq)) {
        return -1;
    }
    //removing the item from the front node
    Node *temp=pq->front;
    *pitem=temp->item;
    //moving the front pointer to the next node
    pq->front=pq->front->next;
    //changing the rear pointer to NULL if the queue becomes empty
    if (pq->front==NULL) {
        pq->rear=NULL;
    }
    //freeing memory of the old front node and decreasing the item count
    free(temp);
    pq->items--;
    return 0;
}

void printq(const Queue *pq) {
	//checking if the queue is empty
    if (queue_is_empty(pq)) {
        printf("The queue is empty.\n");
        return;
    }
    printf("content of the queue: ");
    Node *p= pq->front;
	//Iterating through the elements of the queue and printing them
    while (p!=NULL) {
        printf("%d ",p->item);
        p = p->next;
    }
    printf("\n");
}

void empty_queue(Queue *pq){
	Item dummy;
	while (!queue_is_empty(pq)) {
	dequeue(&dummy, pq);
	}
}