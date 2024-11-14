#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int a = 7;
    char b[] = "My name is Vaibhav.";
    printf("Hello World. The number is: %d\n%s", a, b);
   
    int i = 1, sum = 0;
    for (i; i <= 10; ++i)
    {
        sum += i;
    }   
    printf("The sum is: %d", sum);

    return 0;
}