#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{

    string text = get_string("Input: \n");
    int n = strlen(text) - 1;

    for (int i = 0; i < n; i++)
    {
        printf("%i ", text[i]);
    

        if (text[i] > text[i + 1])
        {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}