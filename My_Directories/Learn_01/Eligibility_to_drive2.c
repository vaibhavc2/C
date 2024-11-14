#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int age;
    int emergency_pass;

    printf("Enter your age: ");
    scanf("%d", &age);
    
    if (age >= 18 && age <= 60)
{
    printf("You are Eligible to drive.\nHappy Driving!!");
}
    else
    {
        printf("Do you have an Emergency Pass? (type '1' for Yes) ");
        scanf("%d", &emergency_pass);

        if ((age >= 14 || age <= 75) && (emergency_pass == 1))
        {
            printf("You are Eligible to drive.\nHappy Driving!!");
        }
        else
        {
            printf("Sorry\nYou are NOT Eligible to drive.");
        }
        
    }

    return 0;
}