#include <stdio.h>

int main() {
    int num , index , sum = 0;
    printf("Enter number : ");
    scanf("%d",&num);
    while (num > 0){
        index = num % 10;
        sum += index;
        num /= 10;
    }
    printf("sum of digits = %d",sum);
}
