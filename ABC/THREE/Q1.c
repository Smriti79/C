#include <stdio.h>
#include <limits.h>
#include <math.h>

int main()
{
    int N;
    double number, sum = 0, sum_squares = 0, smallest = INT_MAX, largest = INT_MIN;

    printf("Enter the number of elements (N): ");
    scanf("%d", &N);

    if (N <= 0)
    {
        printf("Invalid input. N must be a positive integer.\n");
        return 1;
    }

    for (int i = 0; i < N; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%lf", &number);

        sum += number;

        sum_squares += number * number;

        if (number < smallest)
        {
            smallest = number;
        }
        if (number > largest)
        {
            largest = number;
        }
    }

    double average = sum / N;

    double range = largest - smallest;

    double standard_deviation = sqrt((sum_squares / N) - (average * average));

    printf("\nResults for part (a):\n");
    printf("Smallest value: %.2f\n", smallest);
    printf("Largest value: %.2f\n", largest);
    printf("Average value: %.2f\n", average);

    printf("\nResults for part (b):\n");
    printf("Range of values: %.2f\n", range);
    printf("Standard deviation: %.2f\n", standard_deviation);

    return 0;
}