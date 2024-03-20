#include <stdio.h>
void merge(int arr_left[],int nl,int arr_right[],int nr,int arr[]){
    int i = 0 , j = 0, k = 0;
    while (i < nl && j < nr){
        if (arr_left[i] < arr_right[j]){
            arr[k]=arr_left[i];
            i++;
        }
        else{
            arr[k]=arr_right[j];
            j++;
        }
        k++;
    }
    while (i < nl){
        arr[k]=arr_left[i];
        i++;
        k++;
    }
    while (j < nr){
        arr[k]=arr_right[j];
        j++;
        k++;
    }
}

//******************************************************************************************************

void mergesort(int arr[],int n){
    if (n < 2){
        return;
    }
    int mid = n/2;
    int left[mid];
    int right[n-mid];
    for(int i =0;i<mid;i++){
        left[i]=arr[i];
    }
    for(int i =mid;i<n;i++){
        right[i-mid]=arr[i];
    }
    mergesort(left,mid);
    mergesort(right,n-mid);
    merge(left,mid,right,n-mid,arr);
}

int main() {
    int arr1[5],arr2[4],arr[9];
    printf("input first array elements :");
    for (int i = 0; i < 5; ++i) {
        scanf("%d",&arr1[i]);
    }
    printf("input second array elements :");
    for (int i = 0; i < 4; ++i) {
        scanf("%d",&arr2[i]);
    }
    mergesort(arr1,5);
    mergesort(arr2,4);
    merge(arr1,5,arr2,4,arr);
    printf("merged array in ascending order = ");
    for (int i = 0 ; i < 9 ; i++){
        printf("%d ",arr[i]);
    }
}
