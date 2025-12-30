#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void)
{
    char name[50] = "";
    bool isStudent = false;

    if (isStudent == true)
    {
        printf("You are a student\n");
    }
    else
    {
        printf("You are not a student\n");
    }

    printf("Enter your name: \n");
    fgets(name, sizeof(name), stdin);

    name[strlen(name) -1] = '\0';

    if (strlen(name) == 0)
    {
        printf("You did not enter your name!\n");
    }
    else
    {
        printf("Hello %s\n", name);
    }

    return 0;
}