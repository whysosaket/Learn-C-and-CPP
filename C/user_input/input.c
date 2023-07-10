#include<stdio.h>
#include<string.h>

int main(){

    char name[25]; // in bytes (if we go beyond this length or size then it will be an overflow condition)
    printf("\nWhat is Your name?  ->  ");
    // scanf("%s", &name);
    // if we want to take input with the whitespaces then we can use the fgets
    fgets(name, 25, stdin);

    // to get rid of the newline character
    // this newline charater is inserted when we press enter while taking the input
    name[strlen(name)-1] = '\0';

    int age;
    printf("\nWhat is your age?  ->  ");
    scanf("%d", &age);

    printf("Your age is %d and you are %s.\n", age, name);

    return 0;
}