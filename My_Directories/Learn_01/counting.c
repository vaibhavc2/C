#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int n;

    printf("Enter a number where the counting should stop: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
    
    return 0;
}