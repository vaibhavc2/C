#include <stdio.h>
#include <math.h>

int main()
{
    int n;

    printf("\nEnter the no. of elements in array: ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter the elements in array:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int counter = 0; counter < n; counter++)
    {
        for (int i = 0; i < n-counter-1; i++)
        {
            if (arr[i] > arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }            
        }
    }

    printf("\nThe array sorted in ascending order:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}