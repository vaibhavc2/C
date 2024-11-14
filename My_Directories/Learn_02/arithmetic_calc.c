#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    printf("\nArithmetic Calculator: \n\n");

    printf("Press 1 to use addition.\n");
    printf("Press 2 to use subtraction.\n");
    printf("Press 3 to use multiplication.\n");
    printf("Press 4 to use division.\n\n");

    int x;
    double n1, n2, result;

    printf("Please select an operation: ");
    scanf("%d", &x);

    printf("\n\nEnter the first number: ");
    scanf("%lf", &n1);
    printf("Enter the second number: ");
    scanf("%lf", &n2);

    switch (x)
    {
    case 1:
        result = n1 + n2;
        printf("The answer is %lf\n", result);
        break;
    case 2:
        result = n1 - n2;
        printf("The answer is %lf\n", result);
        break;
    case 3:
        result = n1 * n2;
        printf("The answer is %lf\n", result);
        break;
    case 4:
        result = n1 / n2;
        printf("The answer is %lf\n", result);
        break;

    default:
        printf("Please enter a Valid number.\n");
        break;
    }
    return 0;
}