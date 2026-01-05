#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = "HI!"; // all strings end with a null terminator: \0 that takes an extra byte of memory

    string t = "BYE!";

    printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);
    printf("%s\n", s);

    printf("%s\n", t);
    printf("%i %i %i %i\n", t[0], t[1], t[2], t[3], t[4]);

    return 0;
}