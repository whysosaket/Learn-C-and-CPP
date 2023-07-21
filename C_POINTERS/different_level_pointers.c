#include<stdio.h>

int main(){

    // Declaration == instruction manual
    int n;
    int *pn;
    int **ppn;
    int ***pppn;

    n = 45;
    pn = &n;
    ppn = &pn;
    pppn = &ppn;

    printf("%d === %d\n", ***pppn, **ppn);
    printf("%p === %p\n", *pppn, ppn);

    return 0;
}