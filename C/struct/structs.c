#include<stdio.h>
#include<string.h>

struct Player{
    char name[12];
    int score;
};

void printDetails(struct Player);

int main(){

    // Struct(Structure) -> a collection of related members (variables)
    // they can be of different data types
    // listed under one name in a block of code
    // very similar to classes in other languages but these do not have any methods

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Saket");
    player1.score = 100;

    strcpy(player2.name, "Ankit");
    player2.score = 72; 

    printDetails(player1);
    printDetails(player2);

    // printf("%s has %d points.\n", player1.name, player1.score);
    // printf("%s has %d points.\n", player2.name, player2.score);

    return 0;
}

void printDetails(struct Player player){
    printf("%s has %d points.\n", player.name, player.score);
}