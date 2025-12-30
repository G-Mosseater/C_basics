#include <stdio.h>
#include <stdbool.h>
// change data type to double if you prefer doubles
int square(int num)
{

    return num * num;
}

double cube(double num)
{

    return num * num * num;
}

bool ageCheck(int age)
{

    if (age >= 18)
    {
        return true;
    }
}

int getMax(int a, int b)
{
    if (a >= b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main(void)
{   

    int max = getMax(2,3);
    int x = square(2);
    int y = square(3);
    int z = square(4);
    double u = cube(6);

    printf("%d\n", max);

    int age = 29;
    if (ageCheck(age))
    {
        printf("You can buy beer\n");
    }
    else
    {
        printf("You cannot buy beer\n");
    }

    printf("%d\n", x);
    printf("%d\n", y);

    printf("%d\n", z);
    printf("%lf\n", u);

    return 0;
}