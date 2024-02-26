#include <stdio.h>
#include <stdlib.h>

int main() {
   char operator;
   float a,b;
    printf("Enter an operator(+.-.*./): ");
    scanf("%c",&operator);
    printf("Enter two operands: ");
    scanf("%f%f",&a,&b);
    switch (operator){
        case '+':
            printf("%0.1f + %0.1f = %0.1f",a,b,a+b);
            break;

         case '-':
            printf("%0.1f - %0.1f = %0.1f",a,b,a-b);
            break;

        case '*':
            printf("%0.1f * %0.1f = %0.1f",a,b,a*b);
            break;
        case '/':
            printf("%0.1f / %0.1f = %0.1f",a,b,a/b);
            break;
}

}
