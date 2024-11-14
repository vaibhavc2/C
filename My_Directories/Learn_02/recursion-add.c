#include <stdio.h>
#include <math.h>

long int add(int n)
{
    if (n==0 || n==1)
    {
        return n;
    }
    else
    {
        return n + add(n-1);
    }
}

int main() 
{
    int n;
    printf("Enter a natural number until which the sum should be printed: ");
    scanf("%d", &n);

    printf("The sum of numbers till %d is: %ld", n, add(n));

    return 0;
}