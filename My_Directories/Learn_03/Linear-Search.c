#include <stdio.h>
#include <math.h>

int main()
{
    int n, k;
    printf("\nEnter the no. of elements in array: ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter the elements in array:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

LABEL:

    printf("\nEnter an element to find: ");
    scanf("%d", &k);

    int index = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            index = i;
            break;
        }
    }

    if (index == -1)
    {
        printf("\nElement NOT found! Please try again.\n");
        goto LABEL;
    }
    else
    {
        printf("\nThe element was found. It's index is: %d\n", index);
    }

    return 0;
}