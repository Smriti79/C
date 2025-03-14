#include <stdio.h>

double celsius_at_depth(double depth)
{
    return 10 * depth + 20;
}

double fahrenheit(double celsius)
{
    return 1.8 * celsius + 32;
}

int main()
{
    double depth;

    printf("Enter the depth (in kilometers): ");
    scanf("%lf", &depth);

    double celsius = celsius_at_depth(depth);

    double fahrenheit_temperature = fahrenheit(celsius);

    printf("Temperature at depth %.2f km:\n", depth);
    printf("Celsius: %.2f°C\n", celsius);
    printf("Fahrenheit: %.2f°F\n", fahrenheit_temperature);

    return 0;
}