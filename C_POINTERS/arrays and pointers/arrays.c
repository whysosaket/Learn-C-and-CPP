#include<stdio.h>
#include<stdlib.h>

int main(){

    // name of an array is the synonym for location of the first element
    // to most programers arrays are almost just a pointer
    // becuase in most cases arrays decays into pointers

    // Decay means loss of type and loss of dimention

    // here in this case the name array will refer to the address of the 1st element
     int array[10];
     array[0] = 42;
     array[1] = 45;
     array[2] = 50;

     // printing the value
     int size = sizeof(array)/sizeof(array[0]);
     for(int i=0;i<size;i++){
        printf("%d - > ", array[i]);
     }
     printf("\n");

     printf("%p  =  %p\n", array, &array[0]);

     // creating a fake array using only the pointer notation

    // fake array
    // to allocate space we can use the alloca()
    // it micro allocates size bytes of space in stack frame of the caller
    //  this temp spcae is automatically freed up of return

    int *ptr = alloca(sizeof(int)*10);
    // if we write like this then we cannot perform the pointer arithematic similar to that in the array
    // int * const ptr = alloca(sizeof(int)*10); 
    *(ptr+0) = 42;
    *(ptr+1) = 45;
    *(ptr+2) = 50;

    for(int i=0;i<size;i++){
        printf("%d - > ", *ptr++);      // we cannot perform this pointer arthematic directly on the *arr
     }
     printf("\n");

    // A array is almost like an constant pointer

    /*
        Similarities
        1. Both of them live in the stack
        
    */


    return 0;
}