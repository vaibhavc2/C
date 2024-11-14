#include <stdio.h>

int main() 
{
    float temp_in_C;

    printf("Enter the temperature in Celcius : ");
    scanf("%f", &temp_in_C);

    float temp_in_F = ((temp_in_C * 9)/5) + 32;

    printf("The value of this temperature in Fahrenheit is %f", temp_in_F);

    return 0;
}