#include<stdio.h>

void wishBirthday(char name[], int age){
    printf("Happy Birthday, %s!\n", name);
    printf("You are now, %d years old.\n", age);
    return;
}

int main(){
    wishBirthday("Saket", 21);
    return 0;
}