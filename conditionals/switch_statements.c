#include <stdio.h>

int main(void)
{
    int dayOfWeek = 0;

    printf("Enter a day of the week 1-7\n");
    scanf("%d", &dayOfWeek);

    switch (dayOfWeek)
    {
    case 1:
        printf("It is Monday\n");
        break;
    case 2:
        printf("It is Tuesday\n");
        break;
    case 3:
        printf("It is Wednesday\n");
        break;
    case 4:
        printf("It is Thursday\n");
        break;
    case 5:
        printf("It is Friday\n");
        break;
    case 6:
        printf("It is Saturday\n");
        break;
    case 7:
        printf("It is Sunday\n");
        break;
    default:
        printf("Enter a number from 1 to 7\n");
    }

    return 0;
}