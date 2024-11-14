#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    // To print numbers from x to y.
    int x, y;

    printf("Enter the number from where you want to start counting: ");
    scanf("%d", &x);

    printf("Enter the number after which the counting should stop: ");
    scanf("%d", &y);

    while (x <= y)
    {
        printf("%d\n", x);
        x++;
    }
    return 0;
}