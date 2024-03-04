#include <stdio.h>

int calc(int num,int power){
    int ans=1;
    for(int i = 1 ; i <= power ; i++){
        ans *= num;
    }
    return ans;
}
int main() {
    int num, pow, ans;
    printf("Enter the number :");
    scanf("%d",&num);
    printf("Enter a power :");
    scanf("%d",&pow);
    ans = calc(num,pow);
    printf("Answer = %d\n",ans);
    return 0;
}
