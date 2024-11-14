#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    double income, tax;

    printf("Enter your Annual Income: $");
    scanf("%lf", &income);

    if (income < 250000)
    {
        tax = 0;
        printf("Your Annual income is not Taxable.\nYou don't have to pay any taxes.");
    }
    else if (income >= 250000 && income < 500000)
    {
        tax = 0.05 * (income-250000);
        printf("You have to pay $%lf in taxes.", tax);
    }
    else if (income >= 500000 && income < 1000000)
    {
        tax = 0.2 * (income-250000);
        printf("You have to pay $%lf in taxes.", tax);
    }
    else
    {
        tax = 0.3 * (income-250000);
        printf("You have to pay $%lf in taxes.", tax);
    }
    return 0;
}