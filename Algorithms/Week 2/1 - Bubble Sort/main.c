#include <stdio.h>
void bubblesort(int arr[],int n){
    for(int i = 0 ; i < n-1 ; i++){
        for (int j = 0; j < n-1-i; ++j) {
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

}


int main() {
    int arr[6] = {5,8,2,0,13,4};
    bubblesort(arr,6);
    printf("array after sorted : ");
    for (int i = 0 ; i < 6 ; i++){
        printf("%d ",arr[i]);
    }
}
