#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The multiplication table in reversed order of the given number is as follows :-\n");

    for ( i = 10; i; i--)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    
    return 0;
}