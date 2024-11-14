#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int rating;

    printf("Enter your Rating (1 to 5) : ");
    scanf("%d", &rating);

    switch (rating)
    {
    case 1:
        printf("You rated us 1.\nYour suggestions are welcome.");
        break;
    case 2:
        printf("You rated us 2.\nYour suggestions are welcome.");
        break;
    case 3:
        printf("You rated us 3.\nYour suggestions are welcome.");
        break;
    case 4:
        printf("You rated us 4.\nThank You.\nYour suggestions are welcome.");
        break;
    case 5:
        printf("You rated us 5.\nGreat to hear that from you.\nThank You.");
        break;
    default:
        printf("Invalid rating!!");
        break;
    }
    return 0;
}