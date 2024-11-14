#include <stdio.h>
#include <math.h>

int main()
{
    int n1, n2, sum[2] = {0};
    printf("\nEnter no. of elements of 1st array: ");
    scanf("%d", &n1);
    printf("\nEnter no. of elements of 2nd array: ");
    scanf("%d", &n2);

    int a1[n1], a2[n2];

    printf("\nEnter the elements of 1st array:\n");

    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &a1[i]);
        sum[0] += a1[i];
    }
    
    printf("\nEnter the elements of 2nd array:\n");

    for (int j = 0; j < n2; j++)
    {
        scanf("%d", &a2[j]);
        sum[1] += a2[j];
    }

    printf("\nThe sum of all elements of the 1st array is: %d\n", sum[0]);
    printf("\nThe sum of all elements of the 2nd array is: %d\n", sum[1]);
    
    if (n1=n2)
    {
        int a3[n1];
        for (int i = 0; i < n1; i++)
        {
            a3[i] = a1[i] + a2[i];
        }
        printf("\nThe array with the sum of parallel elements is: ");
        for (int i = 0; i < n1; i++)
        {
            printf("%d ", a3[i]);
        }        
    }
    
    return 0;
}