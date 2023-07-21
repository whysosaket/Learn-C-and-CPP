#include<stdio.h>
#include<stdlib.h>

int main(){

    // sometimes they are arrays and sometimes they are pointer
    int array[10];
    printf("%p\n", array);      // this one acts as an pointer
    printf("%lu\n",sizeof(array));       // this one acts as an array 

    return 0;
}