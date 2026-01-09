#include <stdio.h>
#include <string.h>

int main(void)
{

    char names[4][25] = {0};
    int rows = sizeof(names) / sizeof(names[0]);


    for (int i = 0; i < rows; i++)
    {
        printf("Enter a name: \n");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strlen(names[i]) - 1] = '\0';
    }

    for (int i = 0; i < rows; i++)
    {
        printf("%s\n", names[i]);
    }

    // char fruits[][10] = {
    //     "apple",
    //      "Banana",
    //      "Kiwi",
    //      "ananas"};

    // int size = sizeof(fruits) / sizeof(fruits[0]);

    // fruits[0][0] = 'e';
    // fruits[0][4] = 'A';

    // fruits[1][0] = 'a';
    // fruits[1][5] = 'B';

    // fruits[2][0] = 'i';
    // fruits[2][3] = 'K';

    // for (int i = 0; i < size; i++)
    // {
    //     printf("%s\n", fruits[i]);
    // }

    return 0;
}