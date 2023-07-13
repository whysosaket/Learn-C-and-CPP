#include<stdio.h>
#include<stdbool.h>

int findMax(int a, int b){
    return a>b?a:b;
}

int main(){
    int n = findMax(11,12);
    printf("%d\n",n);
    return 0;
}