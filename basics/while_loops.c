#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
    // int number = 0;

    // while (number <= 0)
    // {
    //     printf("Enter a number greater than 0: \n");
    //     scanf("%d", &number);
    // }

    char name[50] = "";

    printf("Enter your name: \n");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0)
    {
        printf("Name cannot be empty! \n");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';
    }
    printf("Hello %s \n", name);

    bool isRunning = true;
    char response = '\0';

    while (isRunning)
    {
        printf("You are running \n");
        printf("Stop running?  Y or N \n");
        scanf(" %c", &response);

        if (response != 'Y' && response != 'y')
        {
            isRunning = false;
        }
    }

    return 0;
}