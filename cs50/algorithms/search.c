#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int numbers[] = {10, 50, 100, 400, 1, 30};

    int n = get_int("Number: \n");

    for (int i = 0; i < 6; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found! \n");
            return 0;
        }
    }
    printf("Not Found! \n");

    return 0;
}