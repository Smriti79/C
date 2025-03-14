#include <stdio.h>

void dispense_bills(int amount, int *fifties, int *twenties, int *tens)
{
    *fifties = amount / 50;
    amount %= 50;

    *twenties = amount / 20;
    amount %= 20;

    *tens = amount / 10;
}

int main()
{
    int amount;
    int fifties, twenties, tens;

    printf("Enter the amount to withdraw (must be a multiple of 10): ");
    scanf("%d", &amount);

    if (amount % 10 != 0 || amount <= 0)
    {
        printf("Invalid amount. Please enter a positive multiple of 10.\n");
        return 1;
    }

    dispense_bills(amount, &fifties, &twenties, &tens);

    printf("Dispensing:\n");
    printf("50s: %d\n", fifties);
    printf("20s: %d\n", twenties);
    printf("10s: %d\n", tens);

    return 0;
}