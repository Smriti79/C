#include <stdio.h>

void calculate_acceleration_and_time(double takeoff_speed, double distance)
{

    takeoff_speed = takeoff_speed * 1000 / 3600;

    double acceleration = takeoff_speed * takeoff_speed / (2 * distance);

    double time = takeoff_speed / acceleration;

    printf("Acceleration: %.2f m/s^2\n", acceleration);
    printf("Time: %.2f seconds\n", time);
}

int main()
{
    double takeoff_speed, distance;

    printf("Enter the takeoff speed (km/hr): ");
    scanf("%lf", &takeoff_speed);
    printf("Enter the distance (meters): ");
    scanf("%lf", &distance);

    calculate_acceleration_and_time(takeoff_speed, distance);

    return 0;
}