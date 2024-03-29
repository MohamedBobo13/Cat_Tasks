#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    int programming;
    int data_structure;
    int discrete_math;
    int algorithms;
} subject;

void random_degree(subject *ptr) {
    srand(time(0));
    for (int i = 0; i < 10; ++i) {
        (ptr + i)->programming = (rand() % 51) + 50;
        (ptr + i)->data_structure = (rand() % 51) + 50;
        (ptr + i)->discrete_math = (rand() % 51) + 50;
        (ptr + i)->algorithms = (rand() % 51) + 50;
    }
}

void display(int id, subject *ptr) {
    printf("the degrees for id : %d\n", id);
    printf("Programming : %d\n", (ptr + (id-1))->programming);
    printf("Data Structure : %d\n", (ptr + (id-1))->data_structure);
    printf("Discrete Math : %d\n", (ptr + (id-1))->discrete_math);
    printf("Algorithms : %d\n", (ptr + (id-1))->algorithms);
}

int main() {
    subject arr[10];
    random_degree(arr);
    int id;
    printf("Enter ID from 1 to 10 : ");
    scanf("%d", &id);
    if(id < 1 || id > 10 ){
        printf("Wrong ID");
    }
    else{
        display(id, arr);
    }
}
