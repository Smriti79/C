#include <stdio.h>
#include <math.h>
int main()
{
    float rate, price, no_Of_Payments, downPayment, Emi, amountBorrow;
    double x, y;
    printf("Enter the price of the item:");
    scanf("%f", &price);
    printf("Enter the down payment:");
    scanf("%f", &downPayment);
    printf("Enter the rate of interest:");
    scanf("%f", &rate);
    printf("Enter the number of payments:");
    scanf("%f", &no_Of_Payments);
    amountBorrow = price - downPayment;
    rate = rate / 12;
    x = ((rate)*amountBorrow);
    y = 1 - (1 / pow((1 + rate), no_Of_Payments));
    Emi = x / y;
    printf("The Borrowed amount is : %.2f$ \n", amountBorrow);
    printf("The EMI is : %.2f$", Emi);

    return 0;
}