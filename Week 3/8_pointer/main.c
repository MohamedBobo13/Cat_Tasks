#include <stdio.h>
void find_min_max(int arr[],int size,int *min , int *max);
int main() {
    int size;
    printf("Enter size of the array :");
    scanf("%d",&size);

    int arr[size];
    int min ,max;

    printf("Enter elements in array :");
    for (int i = 0; i < size ; i++) {
        scanf("%d",&arr[i]);
    }
    find_min_max(arr,size,&min,&max);
    printf("Minimun element in array : %d\n",min);
    printf("Maximun element in array : %d\n",max);
}

void find_min_max(int arr[],int size,int *min , int *max){
    *min = *max = arr[0];
    for (int i = 0; i < size ; i++) {
        if (arr[i] > *max){
            *max = arr[i];
        }
        else if(arr[i] < *min){
            *min = arr[i];
        }
    }
}