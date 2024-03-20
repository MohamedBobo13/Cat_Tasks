#include <stdio.h>

int binarysearch(int arr[],int low, int high ,int x){
    int mid;
    while(low<=high){
        if (low > high){
            return -1;
        }
        mid = low + (high - low) / 2;
        if (x == arr[mid]){
            return mid;
        }
        else if (x < arr[mid]){
            return binarysearch(arr,low,mid-1,x);
        }
        else{
            return binarysearch(arr,mid+1,high,x);
        }
    }
    return -1;
}

int main() {
    int arr[8] = {2 , 5 ,6 ,8 ,14 , 17 , 20 , 23};
    int low = 0 , high = 7;
    int x;
    printf("enter a number\n");
    scanf("%d",&x);
    int index = binarysearch(arr,low,high,x);
    if (index != -1){
        printf("number %d is at index %d\n",x,index);
    }
    else {
        printf("number %d not found\n",x);
    }
    return 0;
}
