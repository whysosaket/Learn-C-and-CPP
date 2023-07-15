#include<stdio.h>

// typedef char user[25];

typedef struct {
    char username[25];
    char password[25];
    int id;
} User ;

void printUser(User);

int main(){

    // typedef = reserved keyword that gives an existing datatype a name

    // this is very tedious and to avoid this writing again and again we can use the typedef feature
    char user1[25] = "Bro";

    // user user2 = "Bro2";

    // struct User user0 = {"Saket", "1234", 2};
    User user0 = {"Saket", "1234", 2};
    printUser(user0);


    return 0;
}

void printUser(User user){
    printf("ID: %d\nUsername: %s\nPassword: %s\n", user.id, user.username, user.password);
}