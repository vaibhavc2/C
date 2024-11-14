#include <stdio.h>

int main()
{
    //C program to implement time unit converter

    float t1, t2;

    printf("Conversion from minutes to hours.\n");
    printf("Enter the time in minutes: ");
    scanf("%f", &t1);
    t2 = t1 / 60;
    printf("\nThe given time in hours: %.2f\n\n", t2);

    printf("\nConversion from hours to minutes.\n");
    printf("Enter the time in hours: ");
    scanf("%f", &t1);
    t2 = t1 * 60;
    printf("\nThe given time in minutes: %.2f\n\n", t2);

    printf("\nConversion from hours to seconds.\n");
    printf("Enter the time in hours: ");
    scanf("%f", &t1);
    t2 = t1 * 60 * 60;
    printf("\nThe given time in seconds: %.2f\n\n", t2);

    printf("\nConversion from seconds to hours.\n");
    printf("Enter the time in seconds: ");
    scanf("%f", &t1);
    t2 = t1 / (60 * 60);
    printf("\nThe given time in hours: %.2f\n\n", t2);

    printf("\nConversion from days to hours.\n");
    printf("Enter the time in days: ");
    scanf("%f", &t1);
    t2 = t1 * 24;
    printf("\nThe given time in hours: %.2f\n\n", t2);

    printf("\nConversion from hours to days.\n");
    printf("Enter the time in hours: ");
    scanf("%f", &t1);
    t2 = t1 / 24;
    printf("\nThe given time in days: %.2f\n\n", t2);

    printf("\nConversion from milliseconds to seconds.\n");
    printf("Enter the time in milliseconds: ");
    scanf("%f", &t1);
    t2 = t1 / 1000;
    printf("\nThe given time in seconds: %.2f\n\n", t2);

    printf("\nConversion from seconds to milliseconds.\n");
    printf("Enter the time in seconds: ");
    scanf("%f", &t1);
    t2 = t1 * 1000;
    printf("\nThe given time in milliseconds: %.2f\n\n", t2);

    printf("\nConversion from days to years.\n");
    printf("Enter the time in days: ");
    scanf("%f", &t1);
    t2 = t1 / 365;
    printf("\nThe given time in years: %.2f\n\n", t2);

    printf("\nConversion from years to days.\n");
    printf("Enter the time in years: ");
    scanf("%f", &t1);
    t2 = t1 * 365;
    printf("\nThe given time in days: %.2f\n\n", t2);

    printf("Thank You !\n");

    return 0;
}