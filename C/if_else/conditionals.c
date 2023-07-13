#include<stdio.h>

int main(){

    int age;
    printf("Enter Your Age: ");
    scanf(" %d", &age);

    if(age>=18){
        printf("You are an adult.\n");
    }
    else if(age>12){
        printf("You are a teen.\n");
    }
    else printf("You are not a child.\n");

    return 0;
}