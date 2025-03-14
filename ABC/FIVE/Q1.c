#include <stdio.h>

int calculate_check_digit(int digits[])
{
    int sum_odd = 0, sum_even = 0;

    for (int i = 0; i < 11; i += 2)
    {
        sum_odd += digits[i];
    }

    for (int i = 1; i < 11; i += 2)
    {
        sum_even += digits[i];
    }

    int total_sum = sum_odd * 3 + sum_even;
    int check_digit = (total_sum % 10 == 0) ? 0 : 10 - (total_sum % 10);

    return check_digit;
}

int main()
{
    int digits[12];

    printf("Enter the 12 digits of the barcode separated by spaces: ");
    for (int i = 0; i < 12; i++)
    {
        scanf("%d", &digits[i]);
    }

    int check_digit = calculate_check_digit(digits);

    if (check_digit == digits[11])
    {
        printf("Barcode: ");
        for (int i = 0; i < 12; i++)
        {
            printf("%d", digits[i]);
            if (i < 11)
                printf(" ");
        }
        printf("\nValidated.\n");
    }
    else
    {
        printf("Barcode: ");
        for (int i = 0; i < 12; i++)
        {
            printf("%d", digits[i]);
            if (i < 11)
                printf(" ");
        }
        printf("\nError in barcode.\n");
    }

    return 0;
}