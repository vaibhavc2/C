#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int n, i;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The multiplication table of the given number is as follows :-\n\n");

    for ( i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    
    return 0;
}