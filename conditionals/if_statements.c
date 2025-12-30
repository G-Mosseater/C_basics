#include <stdio.h>

int main(void)
{
    int age = 0;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 0)
    {
        printf("You aren't born\n");
    }
    else if (age == 0)
    {
        printf("Welcome to hell\n");
    }
    else if (age < 33)
    {
        printf("WOOHOO\n");
    }
    else
    {
        printf("Sad\n");
    }

    return 0;
}
