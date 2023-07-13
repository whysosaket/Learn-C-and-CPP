#include<stdio.h>
#include<stdbool.h>

int main(){

    // logical conditions
    // && -> two conditions are true;
    // || -> either one condition is true
    // ! -> negates the condition

    double temp;
    printf("Enter temp: ");
    scanf("%lf", &temp);
    if(temp>0&&temp<100){
        printf("It is in liquid state\n");
    }else{
        printf("Not in liquid state\n");
    }

    printf("%d\n",1&&0);
    printf("%d\n",1||0);
    printf("%d\n",!0);

    bool sunny = true;
    if(sunny){
        printf("The weather is sunny\n");
    }
    else printf("The weathe is not good.\n");


    return 0;
}