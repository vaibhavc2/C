#include <stdio.h>
#include <math.h>

int fibonacci(int x)
{
    if (x == 1)
    {
        return 0;
    }
    else if (x == 2)
    {
        return 1;
    }
    else
    {
        return fibonacci(x - 2) + fibonacci(x - 1);
    }
}

int main()
{   
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d, ", fibonacci(i));
    }

    return 0;
}