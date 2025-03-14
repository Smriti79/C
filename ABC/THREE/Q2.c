#include <stdio.h>

#define TAX_RATE 0.03625
#define OVERTIME_THRESHOLD 40
#define OVERTIME_RATE 1.5

int main()
{
    int num_employees;
    double total_payroll = 0.0;

    printf("Enter the number of employees: ");
    scanf("%d", &num_employees);

    if (num_employees <= 0)
    {
        printf("Invalid input. Number of employees must be a positive integer.\n");
        return 1;
    }

    for (int i = 0; i < num_employees; i++)
    {
        int id;
        double wage_rate, hours_worked, gross_pay, net_pay;

        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &id);
        printf("Hourly wage rate: ");
        scanf("%lf", &wage_rate);
        printf("Hours worked: ");
        scanf("%lf", &hours_worked);

        if (hours_worked > OVERTIME_THRESHOLD)
        {
            double overtime_hours = hours_worked - OVERTIME_THRESHOLD;
            gross_pay = (OVERTIME_THRESHOLD * wage_rate) + (overtime_hours * wage_rate * OVERTIME_RATE);
        }
        else
        {

            gross_pay = hours_worked * wage_rate;
        }

        double tax = gross_pay * TAX_RATE;
        net_pay = gross_pay - tax;

        printf("Employee ID: %d, Net Pay: $%.2f\n", id, net_pay);

        total_payroll += net_pay;
    }

    double average_pay = total_payroll / num_employees;
    printf("\nTotal payroll: $%.2f\n", total_payroll);
    printf("Average amount paid: $%.2f\n", average_pay);

    return 0;
}