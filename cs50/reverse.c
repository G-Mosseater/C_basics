#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{

    string text = get_string("Input: \n");
    int n = strlen(text);

    for (int i = n - 1; i >= 0; i--)
    {

        printf("%c", text[i]);
    }
    printf("\n");
    return 0;
}