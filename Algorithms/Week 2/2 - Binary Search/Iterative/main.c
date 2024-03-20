#include <stdio.h>

int binarysearch(int arr[],int n,int x){
    int low = 0 , high = n-1 , mid;
    while(low<=high){
        mid = low + (high - low) / 2;
        if (x == arr[mid]){
            return mid;
        }
        else if (x < arr[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}

int main() {
    int arr[8] = {2 , 5 ,6 ,8 ,14 , 17 , 20 , 23};
    int x;
    printf("enter a number\n");
    scanf("%d",&x);
    int index = binarysearch(arr,8,x);
    if (index != -1){
        printf("number %d is at index %d\n",x,index);
    }
    else {
        printf("number %d not found\n",x);
    }
    return 0;
}
