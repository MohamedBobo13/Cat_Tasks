#include <stdio.h>
#include <stdlib.h>

int callc_ones(int num){
    int ones = 0;
    while (num > 0){
        if (num % 2 != 0){
            ones++;
        }
        num /= 2;
    }
    return ones;
}

int main() {
    int x;
    printf("Enter the number : ");
    scanf("%d",&x);
    int ones = callc_ones(x);
    printf("number of zeros : %d\n",(32-ones));
    printf("number of ones : %d\n",ones);
}
