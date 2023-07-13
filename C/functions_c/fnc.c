#include<stdio.h>

void singVerse(){
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday dear koi v!\n");
    printf("Happy Birthday to you!\n\n");
    return;
}

void singVerse1(){
    printf("May dear god bless you!\n");
    printf("May dear god bless you!\n");
    printf("May dear god bless you, my dear!\n");
    printf("May dear god bless you!\n\n");
    return;
}

int main(){
    // in C main function need to be below the used functions
    singVerse();
    singVerse1();
    singVerse();
    return 0;
}

