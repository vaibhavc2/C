//WAP to count the digits of a number

#include <stdio.h>
int main()
{
    int num, count = 0;
    printf("\n Enter number:");
    scanf("%d", &num);

    while (num != 0)
    {
        count++;
        num = num / 10;
    }

    printf("\n Total no. of digits are:%d", count);
    
    return 0;
}