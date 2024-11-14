#include <stdio.h>
#include <math.h>

int count = 1;

void mTable(int n)
{
    while (count <= 10)
    {
        printf("%d * %d = %d\n", n, count, n * count);
        count++;
        mTable(n);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    mTable(n);
    return 0;
}