#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
    int status = 1;
    if (n == 1)
    {
        status = 0;
    }
    {
        for (int i = 2; i <= n / 2; ++i)
        {
            if (n % i != 0)
            {
                status = 1;
            }
            else
            {
                status = 0;
                break;
            }
        }
    }

    return status;
}

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Prime numbers till %d:\n", n);
    
    for (int j = 1; j <= n; j++)
    {
        if (isPrime(j))
        {
            printf("%d\n", j);
        }
    }

    return 0;
}
