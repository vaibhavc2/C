#include <stdio.h>
#include <stdlib.h>

int main()
{
    // the memory allocated by malloc and calloc function is never deallocated automatically
    // So we use the free function to free our memory after using it 
    int *ptr;
    ptr = (int *) malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", ptr[i]);
    }

    free(ptr);
    
    return 0;
}