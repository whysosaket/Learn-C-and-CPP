#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){

    double A = sqrt(10);
    double B = pow(10,2);
    int C = round(2.58);
    int D = ceil(2.58);
    int E = floor(2.58);

    double F = fabs(-1002.212);
    int G = abs(-100);


    printf("Square Root: %.2lf\nPower: %.0lf\nRound: %d\nCeil: %d\nFloor: %d\nAbsolute(Float): %lf\nAbsolute: %d\n", A,B,C,D,E,F,G);

    double H = log(3);
    double I = sin(45);
    double J = cos(45);
    double K = tan(45);

    printf("Log: %lf\nSin: %lf\nCos: %lf\nTan: %lf\n", H,I,J,K);

    return 0;
}