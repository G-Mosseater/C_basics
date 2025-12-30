#include <stdio.h>
#include <stdbool.h>
// nested if statements
int main(void)

{

    float price = 10.00;
    bool isStudent = true; // 10%discount
    bool isSenior = true;  // 20%discount

    if (isStudent)
    {
        if (isSenior)
        {
            printf("You get a student discount of 10%\n");
            printf("You get a senior discount of 20%\n");
            price = price * 0.7;
        }
        else
        {
            printf("You get a student discount of 10%\n");
            price = price * 0.9;
        }
    }
    else
    {
        if (isSenior)
        {
            printf("You get a senior discount of 20%\n");
            price = price * 0.8;
        }
    }

    printf("The total price is: $%.2f\n", price);

    return 0;
}