#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 100
#define stackentry int

typedef struct stacknode{
    stackentry entry;
    struct stacknode *next;
}stacknode;

typedef struct{
    stacknode *top;
    int size;
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
    clearstack(&s1);
}

void creatstack(stack *ps){
    ps->top = NULL;
    ps->size = 0;
}

int stackfull(stack *ps){
    return 0;
}

int stackempty(stack *ps){
    return ps->top == NULL;
}

void push(int e, stack *ps){
    stacknode *pn = (stacknode*)malloc(sizeof (stacknode));
    pn->entry = e;
    pn->next = ps->top;
    ps->top = pn;
    ps->size++;
}

void pop(int *pe,stack *ps){
    stacknode *pn=ps->top;
    *pe=pn->entry;
    ps->top=pn->next;
    free(pn);
    ps->size--;
}

void stacktop(int *pe, stack *ps){
    *pe=ps->top->entry;
}

int stacksize(stack *ps){
    return ps->size;
}

void clearstack(stack *ps){
    stacknode *pn=ps->top;
    while(pn){
        pn=pn->next;
        free(ps->top);
        ps->top = pn;
    }
    ps->size=0;
}

void display(stack *ps){
    stacknode* pn = ps->top;
    while(pn){
        printf("%d ",pn->entry);
        pn=pn->next;
    }
    printf("\n");
}




