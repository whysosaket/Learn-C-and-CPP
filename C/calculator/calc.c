#include<stdio.h>
#include<math.h>

int main(){

    char operator;
    double num1, num2, result;

    printf("Enter the operator (+,-,*,/,^): ");
    scanf("%c",&operator);

    printf("Enter the numbers, number1 and number2: ");
    scanf("%lf %lf", &num1, &num2);

   

    switch (operator)
    {
    case '+':
        result = num1+num2;
        break;
    case '-':
        result = num1-num2;
        break;
    case '*':
        result = num1*num2;
        break;
    case '/':
        result = num1/num2;
        break;
    case '^':
        result = pow(num1, num2);
        break;
    
    default:
        printf("Invalid Operation!\n");
        return 0;
    }

    printf("Result: %.2lf\n", result);

    return 0;
}