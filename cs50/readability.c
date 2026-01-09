#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    string text = get_string("Enter text: ");

    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);
    double L = (double) letters / words * 100.0;
    double S = (double) sentences / words * 100.0;

    double index = 0.0588 * L - 0.296 * S - 15.8;
    int grade = (int) round(index);
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", grade);
    }

    return 0;
}

int count_letters(string text)

{
    int length = strlen(text);
    int letters = 0;
    for (int i = 0; i < length; i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
    }

    return letters;
}

int count_words(string text)
{

    int length = strlen(text);
    int words = 0;
    char nonwords[] = " .?!\0";
    int i = 0;

    while (i < length)
    {
        while (i < length && strchr(nonwords, text[i]) != NULL)
        {
            i++;
        }
        if (i < length)
        {
            words++;
        }

        while (i < length && strchr(nonwords, text[i]) == NULL)
        {
            i++;
        }
    }
    return words;
}

int count_sentences(string text)
{

    int length = strlen(text);
    int sentences = 0;

    for (int i = 0; i < length; i++)
    {
        char c = text[i];
        bool is_end = (c == '.' || c == '?' || c == '!');
        bool is_prev = (i > 0) && (text[i - 1] == '.' || text[i - 1] == '?' || text[i - 1] == '!');

        if (is_end && !is_prev)
        {
            sentences++;
        }
    }

    return sentences;
}
