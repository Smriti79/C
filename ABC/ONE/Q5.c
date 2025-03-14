#include <stdio.h>

void display_instructions() {
    printf("Welcome to the Cyclist Acceleration Calculator!\n");
    printf("This program calculates the cyclist's constant rate of acceleration\n");
    printf("and determines how long the cyclist will take to come to rest.\n");
    printf("Please enter the initial velocity, final velocity, and time interval.\n");
}

float calculate_acceleration(float vi, float vf, float t) {
    float a = (vf - vi) / t;
    return a;
}

float calculate_time_to_rest(float vi, float a) {
    float t = vi / a;
    return t;
}

int main() {
    display_instructions();
    float vi, vf, t;

    printf("Enter the initial velocity (mi/hr): ");
    scanf("%f", &vi);

    printf("Enter the final velocity (mi/hr): ");
    scanf("%f", &vf);

    printf("Enter the time interval (hours): ");
    scanf("%f", &t);

    float a = calculate_acceleration(vi, vf, t);
    printf("The acceleration is %.2f mi/hr^2\n", a);

    float t_to_rest = calculate_time_to_rest(vi, a);
    printf("The time it takes for the cyclist to come to rest is %.2f hours\n", t_to_rest);

    return 0;
}