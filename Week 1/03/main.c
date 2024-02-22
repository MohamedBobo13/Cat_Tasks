#include <stdio.h>
void multiply(int arr1[],int arr2[],int res[]){
    for (int i = 0 ; i < 4 ; i++){
        res[i] = arr1[i] * arr2[i];
    }
}
int main(){
    int arr1[4] = {1,3,5,7};
    int arr2[4] = {0,2,4,6};
    int res[4];
    multiply(arr1,arr2,res);
    for (int i = 0 ; i < 4 ; i++){
        printf("%d ",res[i]);
    }
}