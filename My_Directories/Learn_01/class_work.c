#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    float num_1, num_2, sum, sub, product, divide;

    printf("Enter number1 : ");
    scanf("%f", &num_1);

    printf("Enter number2 : ");
    scanf("%f", &num_2);

    sum = num_1 + num_2;
    sub = num_1 - num_2;
    product = num_1 * num_2;
    divide = num_1 / num_2;

    printf("The sum is: %.2f\n", sum);
    printf("The subtraction is: %.2f\n", sub);
    printf("The product is: %.2f\n", product);
    printf("The quotient is: %.2f\n", divide);

    return 0;
}