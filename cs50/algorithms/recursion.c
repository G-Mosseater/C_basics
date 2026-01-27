#include <stdio.h>
#include <cs50.h>

void draw(int n);
int main(void)
{
    int height = get_int("Height: ");

    draw(height);

    return 0;
}

void draw(int n)
{
    // Base case
    if (n <= 0)
    {
        return;
    }
    // print pyramid of height 1
    draw(n - 1);
    // print one more row
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }

    printf("\n");
}