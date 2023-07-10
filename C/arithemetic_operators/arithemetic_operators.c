#include<stdio.h>

int main(){

    // arithmetic operators
    
    /*
        + addition
        - subtraction
        * multiplication
        / division
        % modulus
        ++ increment
        -- decrement
    */ 

    int a = 5;
    int b = 3;

    int c = a+b;
    printf("%d\n",c);

    a++;
    b--;
    printf("%d    %d\n",a,b);

    // type casting in C
    float d = a/ (float) b;
    printf("%f\n",d);

    return 0;
}