#include <stdio.h>
 void calculate_drag_force(double A, double CD, double rho, double V, double *drag_force)
{
    *drag_force = 0.5 * CD * A * rho * V * V;
}

int main()
{
    double A, CD, rho = 1.23;
    double V, drag_force;

    printf("Enter the projected area (m^2): ");
    scanf("%lf", &A);
    printf("Enter the drag coefficient: ");
    scanf("%lf", &CD);

    printf("\nVelocity (m/s)\tDrag Force (N)\n");

    for (V = 0; V <= 40; V += 5)
    {
        calculate_drag_force(A, CD, rho, V, &drag_force);
        printf("%5.0f\t\t%8.2f\n", V, drag_force);
    }

    return 0;
}