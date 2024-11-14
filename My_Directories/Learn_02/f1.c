#include <stdio.h>
#include <math.h>

int max(int, int, int);

int main()
{
    int a, b, c;
    
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    int maximum = max(a, b, c);

    printf("%d is the greatest.", maximum);

    return 0;
}

int max(int a, int b, int c)
{
    //int maximum;
    if (a > b)
    {
        if (a > c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if (b > c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
    //return maximum;
}