#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{

    // string answer = get_string("Whats your name? ");
    if (argc == 2)
    {

        printf("Hello %s\n", argv[1]);
    }
    else
    {
        printf("Hello man\n");
    }

    return 0;
}