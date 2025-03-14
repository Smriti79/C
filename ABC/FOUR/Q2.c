#include <stdio.h>

int is_multiple_of_7_11_13(int num)
{
    return (num % 7 == 0 || num % 11 == 0 || num % 13 == 0) ? 1 : 0;
}

int sum_of_digits(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int is_prime(int num)
{
    if (num <= 1)
        return 0;
    if (num == 2)
        return 1;
    if (num % 2 == 0)
        return 0;

    for (int i = 3; i * i <= num; i += 2)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

void analyze_number(int num, int *multiple, int *sum_odd, int *prime)
{
    *multiple = is_multiple_of_7_11_13(num);
    *sum_odd = (sum_of_digits(num) % 2 != 0) ? 1 : 0;
    *prime = is_prime(num);
}

int main()
{
    int numbers[] = {104, 3773, 13, 121, 77, 30751};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < size; i++)
    {
        int multiple, sum_odd, prime;

        analyze_number(numbers[i], &multiple, &sum_odd, &prime);

        printf("Number: %d\n", numbers[i]);
        printf("  Multiple of 7, 11, or 13: %s\n", multiple == 1 ? "Yes" : "No");
        printf("  Sum of digits is odd: %s\n", sum_odd == 1 ? "Yes" : "No");
        printf("  Prime number: %s\n\n", prime == 1 ? "Yes" : "No");
    }

    return 0;
}