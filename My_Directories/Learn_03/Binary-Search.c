#include <stdio.h>
#include <math.h>

int main()
{
    // for Binary Search, the array must be sorted either in ascending order OR descending order.
    // following is implemented for ascending order
    int n;

    printf("\nEnter the no. of elements in array: ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter the elements in array:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int index = -1, start_point = 0, end_point = n - 1, k;

LABEL:

    start_point = 0;
    end_point = n - 1;

    printf("\nEnter an element to find: ");
    scanf("%d", &k);

    while (start_point <= end_point)
    {
        int mid_point = (start_point + end_point) / 2;
        if (arr[mid_point] == k)
        {
            index = mid_point;
            break;
        }
        else if (arr[mid_point] > k)
        {
            end_point = mid_point - 1;
        }
        else
        {
            start_point = mid_point + 1;
        }
    }

    if (index == -1)
    {
        printf("\nElement NOT found! Please try again.\n");
        goto LABEL;
    }
    else
    {
        printf("\nThe element was found at the index: %d\n", index);
    }

    return 0;
}