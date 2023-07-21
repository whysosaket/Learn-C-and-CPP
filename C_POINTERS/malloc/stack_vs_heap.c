#include<stdio.h>
#include<stdlib.h>

void bar(){
    int nb;
    nb = 1234;
}

int *foo(){
    // initial
    // int n;
    // n = 43;
    // return &n;

    // final
    int *n;
    // malloc duty is to give us some memory in HEAP;
    n = malloc(sizeof(int));
    *n = 43;
    return n;
}

int main(){

    int *pn;
    pn = foo();                 // here the PN address is some value in stack
    printf("%d\n", *pn);        // when we call this function, the same PN address is overwritten by print function

    bar();                      // when we run this function now the same stack position is again written by bar
    // and this new adddress now happens to be the same old address of n = 43
    printf("%d\n", *pn);

    return 0;
}