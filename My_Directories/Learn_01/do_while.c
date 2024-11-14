#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int x = 1, y;

    printf("Enter the number till which you want to count: ");
    scanf("%d", &y);

    do
    {
        printf("%d\n", x);
        x++;
    } while (x <= y);
    
    return 0;
}