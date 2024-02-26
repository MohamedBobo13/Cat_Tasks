#include <stdio.h>

int max_num(int num1 , int num2 , int num3 , int num4 );
int min_num(int num1 , int num2 , int num3 , int num4 );


int main() {
   int num1 , num2 , num3 , num4;
    printf("Enter 4 numbers : ");
    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
    int max = max_num(num1,num2,num3,num4);
    int min = min_num(num1,num2,num3,num4);
    printf("the max num is : %d\n",max);
    printf("the min num is : %d\n",min);
}


int max_num(int num1 , int num2 , int num3 , int num4 ){
    if (num1 >= num2 && num1 >= num3 && num1 >= num4 ){
        return num1;
    }
    else if(num2 >= num1 && num2 >= num3 && num2 >= num4){
        return num2;
    }
    else if(num3 >= num1 && num3 >= num2 && num3 >= num4){
        return num3;
    }
    else{
        return num4;
    }
}


int min_num(int num1 , int num2 , int num3 , int num4 ){
    if (num1 <= num2 && num1 <= num3 && num1 <= num4 ){
        return num1;
    }
    else if(num2 <= num1 && num2 <= num3 && num2 <= num4){
        return num2;
    }
    else if(num3 <= num1 && num3 <= num2 && num3 <= num4){
        return num3;
    }
    else{
        return num4;
    }
}
