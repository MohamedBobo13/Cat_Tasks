#include <stdio.h>

int partition(int a[],int start,int end){
    int pivot = a[end];
    int pindex = start;
    for (int i = start; i < end; ++i) {
        if(a[i] <= pivot){
            int temp = a[i];
            a[i]=a[pindex];
            a[pindex]= temp;
            pindex++;
        }
    }
    int temp = a[end];
    a[end] = a[pindex];
    a[pindex] = temp;
    return pindex;
}

void quick_sort(int a[],int start, int end){
    if(start < end){
      int pindex = partition(a,start,end);
        quick_sort(a,start,pindex-1);
        quick_sort(a,pindex+1,end);
    }
}

int main() {
    int arr[7]= {2, 0,8, 10, 4, 7, 15, 5};
    quick_sort(arr,0,6);
    for (int i = 0; i < 7; ++i) {
        printf("%d ",arr[i]);
    }
}
