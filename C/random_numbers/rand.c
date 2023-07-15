#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    // pseudo random numbers = a set of values or elements that are statistically random
    // these are not absolute random and hence should be used for cryptography security

    // this generates a seed for our random number 
    srand(time(0));     // if we do not put this seed then it will generate the same number over and over again
  
            // random  mod offset
    int num1 = rand() % 6 + 1;
    int num2 = rand() % 6 + 1;
    int num3 = rand() % 6 + 1;

    printf("%d - %d - %d\n", num1, num2, num3);


    return 0;
}