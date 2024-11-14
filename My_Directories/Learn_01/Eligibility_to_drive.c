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

    printf("Do you have an Emergency Pass? (type '1' for Yes or '0' for No) ");
    scanf("%d", &emergency_pass);

    if ((age < 18 && age >= 12) && emergency_pass == 1)
    {
        printf("You are eligible to drive.\nHappy Driving!!");
    }
    else if (age < 18)
    {
        printf("Sorry, You are NOT eligible to drive, only Adults are allowed to drive!");
    }
    else if (age >= 18 && age <= 60)
    {
        printf("You are eligible to drive.\nHappy Driving!!");
    }
    else if ((age > 60 &&  age <= 80) && emergency_pass == 1)
    {
        printf("You are eligible to drive.\nHappy Driving!!");
    }
    else
    {
        printf("Sorry\nYou are NOT eligible to drive, you're above 60!\nTake Care!!");
    }
    
    return 0;
}