#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    float principal, rate, time, simple_interest, amount;

    printf("Enter Principal: ");
    scanf("%f", &principal);

    printf("Enter Rate: ");
    scanf("%f", &rate);

    printf("Enter Time: ");
    scanf("%f", &time);

    simple_interest = (principal * rate * time) / 100.000000;
    amount = principal + simple_interest;

    printf("The Simple Interest is: %.2f\n", simple_interest);
    printf("The Total Amount is: %.2f", amount);
    return 0;
}