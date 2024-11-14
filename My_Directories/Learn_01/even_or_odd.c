#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a%2==0)
    {
       printf("%d is even.", a);
    }
    else
    {
        printf("%d is odd.", a);
    }
    
    return 0;
}