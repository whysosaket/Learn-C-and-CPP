#include<stdio.h>
#include<math.h>

int main(){

    int a,b;
    scanf("%d %d",&a,&b);
    double h = sqrt(pow(a,2)+pow(b,2));
    printf("%lf\n",h);

    return 0;
}