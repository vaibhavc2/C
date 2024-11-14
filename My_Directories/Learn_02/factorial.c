#include <stdio.h>
#include <math.h>

long long int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return (n * factorial(n - 1));
    }
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The factorial of the given number is: %lld", factorial(n));

    return 0;
}