//WAP to display the greatest of 3 numbers using nested if-else
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("\nEnter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
            printf("\n%d is greatest", a);
        else
            printf("\n%d is greatest", b);
    }
    else
    {
        if (b > c)
            printf("\n%d is greatest", b);
        else
            printf("\n%d is greatest", c);
    }
    return 0;
}