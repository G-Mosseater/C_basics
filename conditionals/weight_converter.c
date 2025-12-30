#include <stdio.h>

int main(void)
{

    int choice = 0;
    float pounds = 0.0f;
    float kilos = 0.0f;

    printf("Weight conversion calculator \n");

    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your choice: ");

    scanf("%d", &choice);

    if (choice == 1)

    {
        printf("Enter weight in kilograms: \n");
        scanf("%f", &kilos);
        pounds = kilos * 2.20462;
        printf("%.2f kilos are equal to %.2f pounds \n", kilos, pounds);
    }
    else if (choice == 2)
    {
        printf("Enter weight in pounds: \n");
        scanf("%f", &pounds);
        kilos = pounds * 2.20462;
        printf("%.2f pounds are equal to %.2f kilos \n", pounds, kilos);
    }
    else
    {
        printf("Invalid choice\n");
    }

    return 0;
}