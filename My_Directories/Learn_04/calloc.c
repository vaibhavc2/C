#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *p;
    p = (float *) calloc(8, sizeof(float)); // calloc initialises the given memory to 0

    // if the space is not sufficient, memory allocation fails and a NULL pointer is returned.
    
    for (int i = 0; i < 8; i++)
    {
        printf("%.2f\n", p[i]);
    }
    
    return 0;
}