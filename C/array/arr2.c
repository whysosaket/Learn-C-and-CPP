#include<stdio.h>

int main(){

    double prices[5];
    prices[0] = 1.111;
    prices[1] = 1.19;
    prices[2] = 5.81;
    prices[3] = 7.76;
    prices[4] = 8.88;

    printf("%.2lf\n", prices[2]);

    return 0;
}