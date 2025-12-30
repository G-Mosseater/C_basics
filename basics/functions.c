#include <stdio.h>
#include <string.h>

void happy(char name[], int years)
{
  //must specify the type of parameter
    printf("\n Hello mister %s!", name);
    printf("\n You die in %d years!\n", years);
}

int main(void)
{

    char name[50] = "";
    int years = 0;
    printf("What is your name? \n");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("How many years do you have left to live?\n");
    scanf("%d", &years);

    happy(name, years);

    return 0;
}