#include<stdio.h>

int main(){

    char grade;
    printf("Enter your grade: ");
    scanf("%c",&grade);

    switch (grade)
    {
    case 'A':
        printf("Perfect Grade\n");
        break;
    case 'B':
        printf("You did good.\n");
        break;
    case 'C':
        printf("You did okay.\n");
        break;
    case 'D':
        printf("You can do better.\n");
        break;
    case 'E':
        printf("You need improvement.\n");
        break;
    default:
        printf("Invalid Grade\n");
        break;
    }

    return 0;
}