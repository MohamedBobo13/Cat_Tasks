#include <stdio.h>
#define maxsize 100
typedef int stackentry;
typedef struct stack{
    int top;
    stackentry array[100];
}stack;
void creatstack(stack *ps);
int stackfull(stack *ps);
int stackempty(stack *ps);
void push(int e, stack *ps);
void pop(int *pe,stack *ps);
void stacktop(int *pe, stack *ps);
int stacksize(stack *ps);
void clearstack(stack *ps);
void display(stack *ps);


int main() {
    stack s1;
    creatstack(&s1);
    push(5,&s1);
    push(2,&s1);
    push(8,&s1);
    display(&s1);
    int del , size, top;
    pop(&del,&s1);
    stacktop(&top,&s1);
    size = stacksize(&s1);
    printf("%d\n",del);
    printf("%d\n",top);
    printf("%d\n",size);
    display(&s1);
}


void creatstack(stack *ps){
    ps->top=0;
}

int stackfull(stack *ps){
    return ps->top==maxsize;
}

int stackempty(stack *ps){
    return !ps->top;
}

void push(int e, stack *ps){
    if (ps->top==100){
        printf("stack is full\n");
    }
    else{
        ps->array[ps->top++]=e;
    }
}

void pop(int *pe,stack *ps){
    if(ps->top==0){
        printf("stack is empty\n");
    }
    else{
        *pe = ps->array[--ps->top];
    }
}

void stacktop(int *pe, stack *ps){
    *pe = ps->array[ps->top-1];
}

int stacksize(stack *ps){
    return ps->top;
}

void clearstack(stack *ps){
    ps->top=0;
}

void display(stack *ps){
    for (int i = ps->top-1; i >= 0 ; i--) {
        printf("%d ",ps->array[i]);
    }
    printf("\n");
}