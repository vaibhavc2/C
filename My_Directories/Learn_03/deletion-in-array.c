#include <stdio.h>
#include <math.h>

int main()
{
    int n, position;
    scanf("%d", &n);

    int a[20];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &position);

    int index = position - 1;

    for (int i = index; i < n-1; i++)
    {
        a[i] = a[i + 1];
    }

    for (int i = 0; i < n-1; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}