#include <stdio.h>
#include <math.h>
//implementing the call by reference in functions: i.e. calling functions using pointers
//in this case, the function uses the original values of the variables and hence they remain changed even after calling the function
void calc(int *x, int *y)
{
    ++*x;
    ++*y;
    printf("\nThe values of x & y inside the function are: %d & %d\n", *x, *y);
}

int main()
{
    int x = 1, y = 2;
    printf("\nThe values of x & y before calling function: %d & %d\n", x, y);
    calc(&x, &y);
    printf("\nThe values of x & y after calling function: %d & %d\n", x, y);
    return 0;
}