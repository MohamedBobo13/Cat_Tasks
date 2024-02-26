#include <stdio.h>

int binarytodecimal(int binarynumber){
    int decimalnumber=0, base=1,reminder;
    while(binarynumber != 0){
        reminder = binarynumber % 10;
        decimalnumber += reminder * base;
        base *= 2;
        binarynumber /= 10;
    }
    return decimalnumber;
}
int main() {
    int binarynumber, decimalnumber;
    printf("Enter a binary number: ");
    scanf("%d",&binarynumber);
    decimalnumber = binarytodecimal(binarynumber);
    printf("%d in binary = %d in decimal",binarynumber,decimalnumber);
}
