#include <stdio.h>
int MAX(int arr[] ){
    int mid, low =0, high = 9;
    while(low < high){
         mid = low + (high - low) / 2;
        if(arr[mid] <= arr[mid+1]){
            low = mid+1;
        }
        else{
            high = mid;
        }
    }
    return arr[mid];
}

int main() {
   int arr[10] = {4, 5, 8, 9, 10, 11, 7, 3, 2, 1};
   int max = MAX(arr);
    printf("Max Element: %d\n",max);

    }

