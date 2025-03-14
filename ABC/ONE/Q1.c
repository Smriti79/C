#include <stdio.h>

const double GRAVITY = 9.80;
const double EFFICIENCY = 0.90;
const double WATER_MASS = 1000.0;
const double MEGAWATT = 1e6;

double calculate_power(double height, double flow)
{

    double mass = flow * WATER_MASS;

    double work = mass * GRAVITY * height;

    double power = work * EFFICIENCY;

    power /= MEGAWATT;

    return power;
}

int main()
{
    double height, flow;

    printf("Enter the height of the dam (m): ");
    scanf("%lf", &height);
    printf("Enter the flow of water (m^3/s): ");
    scanf("%lf", &flow);

    double power = calculate_power(height, flow);
    printf("The power produced by the dam is %.2f MW.\n", power);

    return 0;
}