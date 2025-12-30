#include <stdio.h>

int main(void)
{

    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    printf("Enter the first number: \n");
    scanf("%lf", &num1);

    printf("Enter the operator:(+,-,/,*)\n");
    scanf(" %c", &operator);

    printf("Enter the second number: \n");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 == 0)
        {
            printf("You cant divide by 0 \n");
        }
        else
        {
            result = num1 / num2;
        }
        break;
    default:
        printf("Invalid operator\n");
    }
    printf("Result %.4lf \n", result);

    return 0;
}