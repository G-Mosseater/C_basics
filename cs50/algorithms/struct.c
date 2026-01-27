#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
    string name;
    string phoneNumber;
} person;

int main(void)
{
    person people[3];
    people[0].name = "Jim";
    people[0].phoneNumber = "+354-6155692";

    people[1].name = "Pump";
    people[1].phoneNumber = "+354-754131";

    people[2].name = "Roach";
    people[3].phoneNumber = "+354-6669991";

    string name = get_string("Name: \n");

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {

            printf("Found %s\n", people[i].phoneNumber);
            return 0;
        }
    }
    printf("No number found\n");
    return 0;
}