#include <stdio.h>

void fn(int *, int);

int main()
{
    int a[5] = {11,22,33,44,55};

    fn(a,5);
    printf("\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(a+i)); //since array name acts as a pointer to the starting base address
    }

    return 0;
}

void fn(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        (*(ptr+i))++;
        printf("%d ", *(ptr+i));
    }
}