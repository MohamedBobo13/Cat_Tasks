#include <stdio.h>

int Nthbitset(int n , int p){
    return (n &  (1 << p)) != 0;
}
int main() {
   int number , position;
    printf("Enter any number :");
    scanf("%d",&number);
    printf("enter nth bit to check(0-31) :");
    scanf("%d",&position);
    if (Nthbitset(number,position)){
        printf("the %d bit is set to 1",position);
    }
    else{
        printf("the %d bit is set to 0",position);
    }
}
