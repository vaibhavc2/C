#include <stdio.h>
#include <math.h>

int reverse(int n)
{
    int rev = 0, rem;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    return rev;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("%d is the reverse of the given number.", reverse(n));
    return 0;
}