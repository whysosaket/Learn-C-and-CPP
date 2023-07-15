#include<stdio.h>

void printAge1(int);
void printAge2(int *);

int main(){

    int age = 40;
    int *pAge = NULL;
    pAge = &age;

    printAge1(age);
    printAge2(pAge);

    return 0;
}

void printAge1(int age){
    printf("You are %d years old.\n", age);
}

void printAge2(int *pAge){
    printf("You are %d years old.\n", *pAge);       // dereferencing
}