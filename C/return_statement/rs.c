#include<stdio.h>

int square(int a){
    return a*a;
}

int main(){
    int ans = square(5);
    printf("Square value is %d.\n", ans);
    return 0;
}