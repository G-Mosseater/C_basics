#include <stdio.h>
#include <math.h>
//compund interest calculator
int main(void)
{

    double initialDeposit = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompounded = 0;
    double total = 0.0;

    printf("Compound interest calculator\n\n");

    printf("Enter the principal amount: ");
    scanf("%lf", &initialDeposit);

    printf("Enter the interest rate percentage: ");
    scanf("%lf", &rate);
    rate = rate / 100;

    printf("Enter the duration in years: ");
    scanf("%d", &years);

    printf("Enter number of times compounded per year: ");
    scanf("%d", &timesCompounded);

    total = initialDeposit * pow(1 + rate / timesCompounded, timesCompounded * years);
    printf("After %d years, the total will be $ %.2lf\n", years, total);

    return 0;
}