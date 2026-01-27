#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(void)
{

    char *s = get_string("S: ");
    string t = get_string("T: ");

    printf("%p\n", s);
    printf("%p\n", t);

    if (strcmp(s, t) == 0)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

    return 0;
}