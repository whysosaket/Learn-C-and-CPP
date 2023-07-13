#include<stdio.h>
#include<string.h>

int main(){

    char a[][10] = {"Saket", "Aryan", "Ankit", "Ripple"};

    // a[0] = "Rolly"; // this is wrong and we cannot do this, to achieve this we need to use the strincopy function

    strcpy(a[0], "Rolly");

    int len = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<len;i++){
        printf("%s\n",a[i]);
    }

    return 0;
}