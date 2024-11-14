#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    int remainder = year%4; //Remainder when that year is divided by number 4.

    if (remainder == 0)
    {
        printf("This is a Leap Year.");
    }
    else
    {
        printf("This is not a Leap Year.");
    }
    
    return 0;
}