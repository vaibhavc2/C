#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *) malloc(6 * sizeof(int)); // here 6*4=24 bytes of memory will be allocates
    // malloc returns a void pointer, hence we need to typecast into the desired type of pointer

    printf("Enter the values in the allocated memory: ");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", ptr[i]);
    }
    

    return 0;
}