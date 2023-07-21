#include<stdio.h>

int main(){

    int nb;
    int *ptr;

    nb = 42;
    ptr = &nb;

    // This line means that when you read this pointer
    // when you dereference this then read this as a float
    // by read i mean dereference 
    printf("%d  %0.60f\n",*ptr, *(float *)ptr);

    return 0;
}