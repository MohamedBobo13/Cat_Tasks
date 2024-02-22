#include <stdio.h>

int main(){
    int x=10,y=20,z=30;
    int *px = &x, *py = &y, *pz = &z;
    printf("%d %d %d %u %u %u %d %d %d\n",x,y,z,px,py,pz,*px,*py,*pz);
    printf("Swapping pointers\n");
    int *temp= pz;
    pz=px;
    px=py;
    py=temp;
    printf("%d %d %d %u %u %u %d %d %d",x,y,z,px,py,pz,*px,*py,*pz);
}