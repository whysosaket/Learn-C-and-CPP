#include<stdio.h>
#include<ctype.h>

int main(){

    char unit;
    double temp;
    double converted;

    printf("Is your temperature in (F) or in (C)? ");
    scanf("%c", &unit);
    unit = toupper(unit);

    printf("Enter temperature: ");
    scanf("%lf", &temp);
    if(unit=='F'){
        converted = ((temp - 32)*5)/9;
        printf("The temperature in (C) will be %.2lf\n", converted);
    }
    else if(unit=='C'){
        converted = (temp * 9/5) + 32;
        printf("The temperature in (F) will be %.2lf\n", converted);
    }else{
        printf("Invalid Selection!");
    }

    return 0;
}