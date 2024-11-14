#include <stdio.h>
#include <math.h>

int main()
{
    int n, value, position;
    scanf("%d", &n);

    int a[20];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &position);
    scanf("%d", &value);

    int index = position - 1;

    for (int i = n - 1; i >= index; i--)
    {
        a[i + 1] = a[i];
    }

    a[index] = value;

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}