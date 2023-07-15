#include<stdio.h>

void greet(char[], int);      // this is a function prototype

int main(){

    // WHAT IS IT?

    // Function declaration without a body, before a main function
    // it ensures, that call are made with correct arguments

    // function prototype tells a compiler to flag an error in case that some arguments are missing
    // this helps us in ensuring safety while writing a code
    // it is also possible that some compilers check before compiling and some do not

    // this is commonly used in a header file

    greet("Saket", 19);

    return 0;
}


void greet(char name[], int age){
    printf("Hello, %s!\nYou're %d years old.\n", name, age);
}