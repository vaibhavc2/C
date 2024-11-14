#include <stdio.h>

int main()
{
    int i, j, n, status = 0;
    printf("\nEnter a value: ");
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                status = 1;
                break;
            }
        }
        if (status == 0)
            printf("%d\n", i);
        else
            status = 0;
    }
    return 0;
}