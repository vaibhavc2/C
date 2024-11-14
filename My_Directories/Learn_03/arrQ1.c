#include <stdio.h>
#include <math.h>

//to swap the largest and smallest elements of an array, and display the modified array after swapping

int maximum(int a[], int n)
{
    int max = a[0], i, index = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            index = i;
        }
    }
    return index;
}

int minimum(int a[], int n)
{
    int min = a[0], j, index = 0;
    for (j = 0; j < n; j++)
    {
        if (a[j] < min)
        {
            min = a[j];
            index = j;
        }
    }
    return index;
}

int main()
{
    int n;
    printf("\nNumber of elements in array: ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter the elements in array: \n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int i = maximum(arr, n), j = minimum(arr, n);

    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

    printf("\nThe modified array swapping: \n");

    for (int k = 0; k < n; k++)
    {
        printf("%d ", arr[k]);
    }

    return 0;
}


// // Alternative Way:

// #include <stdio.h>
// int main()
// {
//     int n, i, temp1 = -1, temp2 = -1, pos1 = -1, pos2 = -1, min, max;

//     printf("Enter the num of elements : ");
//     scanf("%d", &n);

//     int a[n];

//     printf("Enter the elements :\n");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//         if (i == 0)
//         {
//             min = max = a[i];
//         }
//         if (a[i] < min)
//             min = a[i];
//         else if (a[i] > max)
//             max = a[i];
//     }

//     for (i = 0; i < n; i++)
//     {
//         if (min == a[i])
//         {
//             pos1 = i;
//             break;
//         }
//     }
//     for (i = 0; i < n; i++)
//     {
//         if (max == a[i])
//         {
//             pos2 = i;
//             break;
//         }
//     }

//     temp1 = a[pos1];
//     temp2 = a[pos2];
//     a[pos1] = temp2;
//     a[pos2] = temp1;

//     printf("\nArray after interchange of smallest and largest : \n");
//     for (i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }

//     return 0;
// }