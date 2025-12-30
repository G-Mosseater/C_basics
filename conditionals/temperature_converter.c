#include <stdio.h>

int main(void)
{
    char choice = '\0';

    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    printf("Temperature Converter\n");
    printf("C. Celsius to Fahrenheit\n");
    printf("F. Fahrenheit to Celsius\n");
    printf("Choose between C and F\n");

    scanf("%c", &choice);

    if (choice == 'C')
    {
        printf("Enter temperature in Celsius\n");

        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32; // C to F
        printf("%.1f Celsius is equal to %.1f Fahrenheit\n", celsius, fahrenheit);
    }
    else if (choice == 'F')
    {
        printf("Enter temperature in Fahrenheit\n");

        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9; // F to C
        printf("%.2f Fahrenheit is equal to %.1f Celsius\n", fahrenheit, celsius);
    }
    else
    {
        printf("Invalid choice!\n");
    }

    return 0;
}