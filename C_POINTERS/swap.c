#include<stdio.h>

void swap(int *a, int *b);

int main(){

    int a = 1231212;
    int b = 456;

    printf("a: %d, b: %d\n", a,b);

    swap(&a,&b);

    printf("a: %d, b: %d\n", a,b);

    return 0;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}