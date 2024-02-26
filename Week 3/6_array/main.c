#include <stdio.h>

int even_num(int arr[],int size);
int main() {
    int size;
    printf("Enter size of the array :");
    scanf("%d",&size);

    int arr[size];

    printf("Enter elements in array :");
    for (int i = 0; i < size ; i++) {
        scanf("%d",&arr[i]);
    }
    int even = even_num(arr,size);
    printf("Total even elements : %d\n",even);
    printf("Total odd elements : %d",(size-even));
}

int even_num(int arr[],int size){
    int even=0;
    for (int i = 0; i < size ; ++i) {
       if( arr[i] % 2 == 0){
           even++;
       }
    }
    return even;
}