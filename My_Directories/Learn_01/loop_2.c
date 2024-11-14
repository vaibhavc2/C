#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    // int i = 0, z = 10 + i;

    // while (z < 20)
    // {
    //     z = 10 + i;
    //     printf("%d\n", z);
    //     i++;
    // }
    int i = 0;

    while (i < 20)
    {
        i++;
        if (i >= 10)
        {
            printf("%d\n", i);
        }
    }
    i *= 3;
    printf("The new value of i is: %d", i);
    printf("\nThe new value of i is: %d", i--);
    printf("\nThe new value of i is: %d", i);
    
    return 0;
}