#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string names[] = {
        "Jim",
        "Anna",
        "Mark",
        "Sofia",
        "Leo",
        "Nina"};
    string phoneNumbers[] = {
        "+354-555-1234",
        "+354-555-2345",
        "+354-555-3456",
        "+354-555-4567",
        "+354-555-5678",
        "+354-555-6789"};

    string name = get_string("Name: \n");

    for (int i = 0; i < 6; i++)
    {
        if (strcmp(names[i], name) == 0)
        {

            printf("Found %s\n", phoneNumbers[i]);
            return 0;
        }
    }
    printf("No number found\n");
    return 0;
}