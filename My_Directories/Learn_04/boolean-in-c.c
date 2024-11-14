#include <stdio.h>
#include <stdbool.h>

bool iseven(int n)
{
    if (n%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }    
}

int main()
{
    int n;
    scanf("%d", &n);

    if (iseven(n))
    {
        printf("Even");
    }
    
    return 0;
}