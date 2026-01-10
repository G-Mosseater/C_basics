#include <stdio.h>
#include <cs50.h>

int fibo(int n);
int main(void)
{

    int n = get_int("fibo number : ");

    printf("fibo number %i is %i\n", n, fibo(n));
}

int fibo(int n)
{
    // base case
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    // recursive case
    return fibo(n - 1) + fibo(n - 2);
}