#include <stdio.h>
int delete_element(int arr[],int * size ,int pos){
    if (pos < 0 || pos > (*size)-1){
        printf("invalid position");
        return 0;
    }
        for (int i = pos-1 ; i < *size ; i++){
            arr[i]=arr[i+1];
        }
        (*size)--;
}

int main() {
   int arr[5],pos,flag = 1;
    int size = sizeof (arr) /sizeof (arr[0]);
    printf("input array elements:");
    for (int i = 0; i < 5; ++i) {
        scanf("%d",&arr[i]);
    }
    printf("input position te delete:");
    scanf("%d",&pos);
    flag = delete_element(arr,&size,pos);
    if (flag != 0){
        printf("array elements:");
        for (int i = 0; i < size; ++i) {
            printf("%d ",arr[i]);
        }
    }
}
