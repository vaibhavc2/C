#include <stdio.h>
#include <math.h>

int is_Even(int a)
{
    if (a % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int i = 1, result = 0;

int sum(int n)
{
    while (i <= n)
    {
        if (is_Even(i))
        {
            result += i;
        }
        i++;
        sum(n);
    }

    return result;
}

int main()
{
    int n;
    scanf("%d", &n);

    // int sum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (is_Even(i))
    //     {
    //         sum += i;
    //     }
    // }

    printf("%d", sum(n));

    return 0;
}