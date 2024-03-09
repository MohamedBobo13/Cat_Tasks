#include <stdio.h>
#include <stdlib.h>
#define MAXQUEUE 100
typedef int queueentry;

typedef struct queuenode{
    queueentry entry;
    struct queuenode *next;
}queuenode;

typedef struct queue{
    queuenode * front;
    queuenode * rear;
    int size;
}queue;

void creatqueue(queue *pq);

void enqueue(int e,queue *pq);

void dequeue(int *pe,queue*pq);

int queueempty(queue *pq);

int queuefull(queue *pq);

int queuesize(queue *pq);

void clearqueue(queue *pq);

void display(queue *pq);


int main() {
    queue q1;
    creatqueue(&q1);
    enqueue(4,&q1);
    enqueue(9,&q1);
    enqueue(11,&q1);
    display(&q1);
    int del;
    dequeue(&del,&q1);
    printf("%d\n",del);
    display(&q1);
    return 0;
}

void creatqueue(queue *pq){
    pq->front = NULL;
    pq->rear = NULL;
    pq->size = 0;
}

void enqueue(int e, queue *pq) {
    queuenode *pn = (queuenode*)malloc(sizeof (queuenode));
    pn->entry = e;
    pn->next =  NULL;
    if(!pq->rear){
        pq->front = pn;
    }
    else{
        pq->rear->next = pn;
    }
    pq->rear=pn;
    pq->size++;
}


void dequeue(int *pe,queue*pq){
    queuenode *pn = pq->front;
    *pe = pn->entry;
    pq->front= pn->next;
    free(pn);
    if(!pq->front){
        pq->rear=NULL;
    }
    pq->size--;
}

int queueempty(queue *pq){
    return !pq->size;
}

int queuefull(queue *pq){
    return 0;
}

int queuesize(queue *pq){
    return pq->size;
}

void clearqueue(queue *pq){
    while(pq->front){
        pq->rear = pq->front->next;
        free(pq->front);
        pq->front = pq->rear;
    }
    pq->size=0;
}
void display(queue *pq){
    queuenode *pn;
    for(pn=pq->front;pn;pn=pn->next){
        printf("%d ",pn->entry);
    }
    printf("\n");
}