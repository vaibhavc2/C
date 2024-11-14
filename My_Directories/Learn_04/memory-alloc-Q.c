#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = (int *)malloc(10 * sizeof(int));
    int counter = 0;
    for (int i = 0; i < 10; i++)
    {
        counter = i + 1;
        ptr[i] = 7 * counter;
        printf("7 * %d = %d\n", counter, ptr[i]);
    }
    // free(ptr);
    ptr = realloc(ptr, 15 * sizeof(int));
    for (int i = 0; i < 15; i++)
    {
        counter = i + 1;
        ptr[i] = 7 * counter;
        printf("\n7 * %d = %d", counter, ptr[i]);
    }
    // free(ptr);
    return 0;
}