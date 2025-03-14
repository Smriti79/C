#include <stdio.h>

double fast_food_billions(int year)
{

    int t = year - 2005;

    double charges = 33.2 + 16.8 * t;

    return charges;
}

int main()
{
    int year;

    while (1)
    {
        printf("Enter a year after 2005 (or a year before 2005 to stop): ");
        scanf("%d", &year);

        if (year < 2005)
        {
            printf("Program stopped. You entered a year before 2005.\n");
            break;
        }

        double charges = fast_food_billions(year);
        printf("Predicted fast food charges in %d: $%.1f billion\n\n", year, charges);
    }

    return 0;
}