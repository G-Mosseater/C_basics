#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
int score(string word);

int main(void)
{

    string Player1 = get_string("Player1: ");
    string Player2 = get_string("Player2: ");
    int score1 = score(Player1);
    int score2 = score(Player2);

    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }

    return 0;
}

int score(string word)

{
    int total = 0;
   int length = strlen(word);

    for (int i = 0; i < length; i++)
    {

        if (isupper(word[i]))
        {
            total = total + POINTS[word[i] - 'A'];
        }
        else if (islower(word[i]))
        {
            total = total + POINTS[word[i] - 'a'];
        }
    }

    return total;
}
