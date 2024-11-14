#include <stdio.h>
#include <math.h>

int main()
{
    // the name of the array includes the basic starting address of the array i.e. address of arr[0]
    int a[5] = {1, 2, 3, 4, 5};
    float b[] = {6.0, 7.0, 8.0, 9.0, 10.0}; // When initialising in the program itself, we may skip the size
    double c[8] = {}; // this initializes all values as 0
    char ch[] = {'V', 'a', 'i', 'b', 'h', 'a', 'v'};
    int arr[10] = {1, 2, 3, 4, 5}; //Partial-initialisation: the other values are set to 0
    int d[5] = {0}; // all values are set to 0
    int e[5] = {1}; // 1st value is set to 1 & others are set to 0
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%f ", b[i]);
    }
    printf("\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%lf ", c[i]);
    }
    printf("\n");
    for (int i = 0; i < 7; i++)
    {
        printf("%c ", ch[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", d[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", e[i]);
    }
    printf("\n");
    return 0;
}