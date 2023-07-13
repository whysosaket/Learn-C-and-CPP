#include<stdio.h>
#include<string.h>

int main(){

    // For characters
    char a = 'A';
    char b = 'B';
    char temp;

    // performing the swap
    temp = a;
    a = b;
    b = temp;

    printf("%c - %c\n",a,b);

    // For strings
    // Declare size before hand to avoid any errors
    char sa[20] = "Roll";
    char sb[20] = "Aryan";
    char stemp[20];
    strcpy(stemp, sa);
    strcpy(sa, sb);
    strcpy(sb, stemp);

    printf("%s - %s\n", sa,sb);

    return 0;
}