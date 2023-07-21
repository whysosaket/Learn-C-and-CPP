#include<stdio.h>
#include<stdlib.h>

int main(){

    // in C
    // a[n] = *(a+n)

    // sometimes they are arrays and sometimes they are pointer
    int array[10];
    printf("%p\n", array);      // this one acts as an pointer
    printf("%lu\n",sizeof(array));       // this one acts as an array 

    /*
        C STANDARD

        Except when it is the operand of the sizeof operator, or the unary & operator, or is
        a string literal (array of char) used to initialize an array, an expression that has type "array of type"
         is converted to an expression with type "pointer to type" that points to the initial element of
        the array object and is not an Ivalue.
    
    */
   printf("---------\n");
   // we can also access an element through the pointer notation

   array[2] = 99;
   printf("%d\n", *(array+2));
   printf("%d\n", array[2]);

   // now this wordks because of the array decay as
   printf("%d\n", 2[array]);
   /*
    what happens is that
    for array[2]
    the compiler will convert this into *(array + 2);

    similarly for 2[array];
    the compiler will convert it to *(2 + array);
   */

    printf("------------------------\n");

    printf("%c\n", "hello"[2]); // this will also work as in C strings are just array of characters
    
    printf("%c\n", *("hello" + 2));
    printf("%c\n", 2["hello"]);
    // the above line will break into *(2+"hello");

    // this will return the first character
    printf("%c\n", *"hello"); // this will also work as in C strings are just array of characters

    return 0;
}