#include<stdio.h>

int main(){

    // memory = an array of bytes within RAM (street)
    // memory block = a single unit within memory, used to hold some value
    // memory address = the address of where the memory address is located

    char a = 'X';
    char b = 'Y';
    char c = 'Z';

    printf("%lu\n", sizeof(a));
    printf("%lu\n", sizeof(b));
    printf("%lu\n", sizeof(c));

    printf("%p\n", &a); 
    printf("%p\n", &b);
    printf("%p\n", &c);

    /*
        Example Addresses
        0x16b276f8b
        0x16b276f8a
        0x16b276f89

        Here we can see that the address is change by just one value or one byte
        if we use, say short or int it will change as per it's size
    */


    return 0;
}