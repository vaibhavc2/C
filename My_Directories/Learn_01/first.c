#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    float b;

    printf("Enter the value of a\n");
    scanf("%d", &a);

    printf("Enter the value of b\n");
    scanf("%f", &b);

    printf("This is a : %d & This is b : %f", a, b);
    printf("The Sum is : %f\n", a + b);

    return 0;
}
