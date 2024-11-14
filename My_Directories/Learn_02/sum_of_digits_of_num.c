//WAP to find the sum of digits of a number

#include <stdio.h>
int main()
{
    int num, sum = 0, digit;
    printf("\n Enter number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    printf("\n Sum of the digits of a number is: %d", sum);
    return 0;
}
