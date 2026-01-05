#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{

    string s = get_string("Input: ");
    // int n = strlen(s);

    printf("Output: ");

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", s[i]);
    }

    printf("\n");

    return 0;
}