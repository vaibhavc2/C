#include <stdio.h>
#define pi 3.14

int main()
{
    float radius;
    
    printf("Enter radius of the circle : ");
    scanf("%f", &radius);

    printf("The area of the circle is %.2f\n", pi * radius * radius);
    return 0;
}