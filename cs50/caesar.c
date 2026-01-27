#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool only_digits(string s);
char rotate(char c, int n);

int main(int argc, string argv[])
{
    // check if the number of arguments is correct
    // check if the argument is a number

    if (argc != 2 || !only_digits(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // convert to numerical value
    int k = atoi(argv[1]);

    // get input from user
    string text = get_string("plaintext: ");

    // loop through each charachter of the string
    for (int i = 0; text[i] != '\0'; i++)
    {
        // rotate the current character by k and update the string
        text[i] = rotate(text[i], k);
    }
    printf("ciphertext: %s\n", text);

    return 0;
}

bool only_digits(string s)
{

    // check length of argument string
    int length = strlen(s);
    // loop through each charachter of the argument
    for (int i = 0; i < length; i++)
    {

        // return false if non digit charachter is found
        if (!isdigit(s[i]))
        {
            return false;
        }
    }
    return true;
}

char rotate(char c, int n)
{
    // return charachter unchanged if it's not a letter
    if (!isalpha(c))
    {
        return c;
    }

    char letter;

    // determine base ASCII value for lower and uppercasse
    if (islower(c))
    {
        letter = 'a';
    }
    else
    {
        letter = 'A';
    }

    // find position of the charachter 0-25
    // ASCII values of letters are numbers
    int position = c - letter;

    // rotate position by n and wrap using modulo26 (the alphabet has 26 letters)
    int rotated = (position + n) % 26;

    // convert back to charachter
    char new_c = rotated + letter;

    return new_c;
}
