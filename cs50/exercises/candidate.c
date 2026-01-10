#include <stdio.h>
#include <string.h>
#include <cs50.h>

typedef struct
{
    string name;
    int votes;
} candidate;

candidate get_candidate(void);

int main(void)
{
    candidate candidates[3];
    for (int i = 0; i < 3; i++)
    {

        candidates[i] = get_candidate();
    }
    for (int i = 0; i < 3; i++)
    {

        printf("%s has %i votes\n", candidates[i].name, candidates[i].votes);
    }

    return 0;
}

candidate get_candidate(void)
{

    candidate new_candidate;

    new_candidate.name = get_string("Name: ");
    new_candidate.votes = get_int("Votes: ");

    return new_candidate;
}