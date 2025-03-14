#include <stdio.h>

const double LITERS_PER_FLUSH_OLD = 15.0;
const double LITERS_PER_FLUSH_NEW = 2.0;
const double FLUSHES_PER_DAY = 14.0;
const double TOILETS_PER_PERSON = 1.0 / 3.0;
const double COST_PER_TOILET = 150.0;

void estimate_water_savings_and_cost(int population)
{

    double num_toilets = population * TOILETS_PER_PERSON;

    double water_saved = num_toilets * FLUSHES_PER_DAY * (LITERS_PER_FLUSH_OLD - LITERS_PER_FLUSH_NEW);

    double total_cost = num_toilets * COST_PER_TOILET;

    printf("Water saved per day: %.2f liters\n", water_saved);
    printf("Total cost to install new toilets: $%.2f\n", total_cost);
}

int main()
{
    int population;

    printf("Enter the community's population: ");
    scanf("%d", &population);

    estimate_water_savings_and_cost(population);

    return 0;
}