#include<stdio.h>

int main(){

    int i;
    int ans = 1;
    printf("Enter N: ");
    scanf("%d",&i);
    while(i>0){
        ans*=i--;
    }
    printf("Factorial is %d.\n",ans);

    return 0;
}