#include<stdio.h>

void foo1(int array[]){
    printf("%d\n", array[1]);
}

// a down side of this type of function passing is that
// we will no longer be knowing the size of the array
void foo2(int *array){
    // Both of them are same
    printf("%d\n", *(array+1)); 
    printf("%d\n", array[1]);
}

int main(){

    int array[1000000];
    array[1] = 91237;
    foo1(array);
    foo2(array);

    return 0;
}

