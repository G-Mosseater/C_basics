#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(void)
{
    string strings[] = {
        "apple",
        "banana",
        "cherry",
        "dragon",
        "eagle",
        "forest"};

    string s = get_string("String: \n");

    for (int i = 0; i < 6; i++)
    {
        if (strcmp(strings[i], s) == 0)
        {
            printf("Found! \n");
            return 0;
        }
    }
    printf("Not found!\n");
    return 1;
}