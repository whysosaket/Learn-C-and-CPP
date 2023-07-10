#include<stdio.h>
#include<math.h>

int main(){

    double a;
    printf("Length: ");
    scanf("%lf", &a);

    double circum = M_PI*2*a;
    double area = M_PI*a*a;
    printf("Area: %lf\nCircum: %lf\n", area, circum);

    return 0;
}