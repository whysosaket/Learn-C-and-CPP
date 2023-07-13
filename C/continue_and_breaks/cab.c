#include<stdio.h>

int main(){

    int a[] = {1,2,3,4,3,11,12,1231,1231,434,22,-5};

    int len = sizeof(a)/sizeof(a[0]);

    for(int i=0;i<len;i++){
        if(a[i]<0) break;
        if(a[i]%2==0) continue;
        printf("%d, ",a[i]);
    }
    printf("\n");

    return 0;
}