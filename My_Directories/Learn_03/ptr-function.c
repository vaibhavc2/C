#include <stdio.h>

void Sum(int *, int *, int *);

void Swap(int *p1, int *p2)
{
    *p1 = *p1 + *p2; //logic of swapping 2 variables without third variable!
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;
}

int main()
{
    int a, b, sum;
    scanf("%d%d", &a, &b);
    Sum(&a, &b, &sum);
    printf("\n%d\n", sum);
    Swap(&a, &b);
    printf("\n%d %d", a, b);
    return 0;
}

void Sum(int *p1, int *p2, int *p3)
{
    *p3 = *p1 + *p2;
}
