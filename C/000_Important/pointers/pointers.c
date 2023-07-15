#include<stdio.h>

int main(){

    // pointers =  variable like reference that holds a memory address to another variable, array, etc
    //              some tasks are performed easily with pointers
    //              * = indirection operator, (value at address)

    int age = 21;
    int *pAge = &age;
    
    printf("Value: %d\nAddress: %p\n", age, &age);
    printf("\n\nPointer: %p\nValue at Pointer: %d\n", pAge,*pAge);
    // here by using *pAge we DEREFERENCE the pointer and get the actual value at the pointer

    printf("\n\nSize of Age: %lu\nSize of Pointer: %lu\n", sizeof(age), sizeof(pAge));
    // size of pointer is always 8 bytes

}