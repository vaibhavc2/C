#include <stdio.h>
#include <math.h>

int rem, rev = 0;

int reverse(int n)
{
    if (n)
    {
        rem = n % 10;
        rev = 10 * rev + rem;
        reverse(n / 10);
    }
    return rev;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The reverse of the given number is: %d", reverse(n));
    return 0;
}