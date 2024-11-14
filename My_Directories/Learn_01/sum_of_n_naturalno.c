#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int i = 1, n, sum = 0;

    printf("Enter a natural number to take sum upto that number(n): ");
    scanf("%d", &n);
    
    while (i<=n)
    {
        sum = sum + i;
        i++;
    }
    
    printf("The sum of n natural numbers is: %d", sum);
    
    return 0;
}