#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<stdbool.h>

int generateRandom();
void checkInput(int, int);
void gameLoop(int);

int main(){

    int number = generateRandom();
    gameLoop(number);

    return 0;
}

void gameLoop(int number){
    int guess;
    do{
        printf("Enter your guess: ");
        scanf("%d", &guess);
        checkInput(guess, number);
    }while(guess!=number);
}

void checkInput(int x, int n){
    if(x>n){
        printf("Your guess is higher!\n");
    }else if(x<n){
        printf("Your guess is lower!\n");
    }else printf("You Won!\n");
}

int generateRandom(){
    srand(time(0));
    return rand()%100+1;
}