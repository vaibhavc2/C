#include <stdio.h>
#include <math.h>

int prime(int n)
{
    int status, count;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i != 0 && n > 1)
        {
            status = 1;
            count++;
        }
        else
        {
            status = 0;
            break;
        }
    }
    return status;
}

int main()
{
    for (int i = 2; i <= 1000; i++)
    {
        if (prime(i))
        {
            printf("\n%d", i);
        }
    }
    return 0;
}