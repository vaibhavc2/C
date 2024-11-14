#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
 
{
    char username;
    float principal;
    float rate;
    int time_in_years;

    // Program to calculate Compound Interest and Amount
    
    printf("Welcome to the Bank, sir.\n");
    printf("Please Enter your Username (only of 1 character) : ");
    scanf("%c", &username);

    printf("Enter Principal : $");
    scanf("%f", &principal);

    printf("Enter Rate : ");
    scanf("%f", &rate);

    printf("Time? ");
    scanf("%d", &time_in_years);

    float base = (1 + rate/100);
    float amount = principal * pow(base, time_in_years);
    float interest = amount - principal;

    printf("Sir, you will get an Amount of $%f\n", amount);
    printf("You will get an interest of $%f", interest);

    return 0;
}