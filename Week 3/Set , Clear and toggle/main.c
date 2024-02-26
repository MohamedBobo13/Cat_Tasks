#include <stdio.h>

int setbit (int num, int pos){
    return num | (1<<pos);
}
int clearbit (int num, int pos){
    return num & ~ (1<<pos);
}
int togglebit (int num, int pos){
    return num ^ (1<<pos);
}
int main() {
    int num, pos;
    printf("enter num & pos : ");
    scanf("%d%d",&num,&pos);
    int set_num = setbit(num,pos);
    printf("num after set : %d\n",set_num);
    int clear_num = clearbit(num,pos);
    printf("num after clear : %d\n",clear_num);
    int toggle_num = togglebit(num,pos);
    printf("num after toggle : %d\n",toggle_num);
    return 0;
}
