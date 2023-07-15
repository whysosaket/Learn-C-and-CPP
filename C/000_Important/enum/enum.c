#include<stdio.h>

enum Day {Sunday=1, Monday=2, Tuesday=3, Wednesday=4, Thursday=5, Friday=6, Satuday=7};


int main(){
    // enum = user defined type of named interger identifiers
    // this helps to make the program more readable

    // we can either decalre these enums inside or outside a function

    // not string but can be associated with integers

    enum Day today = Sunday;
    printf("%d\n", Friday);

    return 0;
}