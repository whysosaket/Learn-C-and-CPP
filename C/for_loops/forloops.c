#include<stdio.h>

int main(){

    printf("Enter the number N: ");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%dx%d=%d\n",i,n,i*n);
    }

    return 0;
}