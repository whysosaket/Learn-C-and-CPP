#include<stdio.h>

int main(){

    int a = 123;
    int *p = &a;

    printf("%p\n%p\n%p\n%p\n", p, p+1, p+2, p+3);

    /*
    
    0x16d88b078
    0x16d88b07c
    0x16d88b080
    0x16d88b084

    Here, the pointer is advancing 4 steps,
    suggesting that the jump size is 4 bytes.
    
    */

    return 0;
}