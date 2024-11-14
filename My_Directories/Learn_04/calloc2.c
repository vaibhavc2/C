#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *p;
    int n;
    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);
    p = (float *) calloc(n, sizeof(float));
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &p[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%.2f\n", p[i]);
    }
    
    return 0;
}