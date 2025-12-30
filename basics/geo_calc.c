#include <stdio.h>
#include <math.h>

// classic geometry calculator
int main(void)
{

    double radius = 0.0;
    double area = 0.0;
    double volume = 0.0;
    double surfaceArea = 0.0;
    double pi = 3.14159;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area = pi * pow(radius, 2);
    surfaceArea = 4 * pi * pow(radius, 2);
    volume = (4.0 / 3.0) * pi * pow(radius, 3);

    printf("AREA: %.2lf\n", area);
    printf("SurfaceArea: %.2lf\n", surfaceArea);
    printf("volume: %.2lf\n", volume);

    return 0;
}