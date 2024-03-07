#include <stdio.h>
#define MAXQUEUE 100

typedef struct queue{
    int array[100];
    int front;
    int rear;
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
    pq->front = 0;
    pq->rear=-1;
    pq->size=0;
}

void enqueue(int e, queue *pq) {
    if (queuefull(pq)) {
        printf("Error: Queue is full. Cannot enqueue %d\n", e);
        return;
    }

    pq->rear = (pq->rear + 1) % MAXQUEUE;
    pq->array[pq->rear] = e;
    pq->size++;
}


void dequeue(int *pe,queue*pq){
    if(queueempty(pq)){
        printf("Error: Queue is empty. Cannot enqueue\n");
    }
    else{
        *pe=pq->array[pq->front];
        pq->front=(pq->front+1) % MAXQUEUE;
        pq->size--;
    }
}

int queueempty(queue *pq){
    return !pq->size;
}

int queuefull(queue *pq){
    return pq->size==MAXQUEUE;
}

int queuesize(queue *pq){
    return pq->size;
}

void clearqueue(queue *pq){
    pq->front = 0;
    pq->rear=-1;
    pq->size=0;
}
void display(queue *pq){
    int pos,s;
    for(pos=pq->front,s=0;s<pq->size;s++){
        printf("%d ",pq->array[pos]);
        pos= (pos+1) % MAXQUEUE;
    }
    printf("\n");
}