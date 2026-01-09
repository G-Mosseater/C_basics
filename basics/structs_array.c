#include <stdio.h>

typedef struct
{
    char model[25];
    int year;
    int price;

} Car;

int main(void)
{

    Car cars[] = {{"S2000", 2005, 100000}, {"Eclipse", 2003, 70000}, {"Golf", 2019, 50000}};

    int number = sizeof(cars) / sizeof(cars[0]);

    for (int i = 0; i < number; i++)
    {

        printf("%s %d $%d\n", cars[i].model, cars[i].year, cars[i].price);
    }

    return 0;
}