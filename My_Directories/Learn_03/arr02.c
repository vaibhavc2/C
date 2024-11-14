#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n");
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nThe addresses of the elements stored in the array:\n");
    
    for (int i = 0; i < n; i++)
    {
        printf("%d: %u ,", arr[i], &arr[i]);
    }
    
    printf("\nThe given array in reverse order is:\n");
    
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    
    printf("\nThe maximum no. in the array elements is: %d\n", max);
    
    int min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    
    printf("\nThe minimum no. in the array elements is: %d\n", min);
    
    return 0;
}