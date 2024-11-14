#include <stdio.h>
#include <math.h>

void f1(int arr[], int size) // by reference
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }    
}

void f2(int x)
{
    printf("%d ", x);
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nPrinting the array using passing by reference:\n");

    f1(a, n); // this is a function in which the array is passed by reference. Changes performed on the array elements are reflected back in the main function as well.
    
    printf("\nPrinting the array using passing by value:\n");   
    
    for (int i = 0; i < n; i++)
    {
        f2(a[i]); // this is a function in which the array is passed by value. Duplicate copies of the array elements will be passed to the function. In this approach we pass the elements one by one. Changes performed by the function definition are never reflected in the original values of the array elements
    }
    
    return 0;
}