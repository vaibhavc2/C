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

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
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