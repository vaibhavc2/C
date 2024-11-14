#include <stdio.h>
#include <math.h>

int main() {
    for (int i = 5; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i%2==0)
            {
                printf("#");
            }
            else
            {
                printf("@");
            }
        }
        printf("\n");
    }
    return 0;
}