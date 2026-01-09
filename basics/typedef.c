#include <stdio.h>


typedef int Number;

int main(void)
{
    Number x = 3;
    Number y = 4;
    Number z = x + y;

    printf("%d\n", z);
    return 0;
}