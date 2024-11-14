#include <stdio.h>

int main()

{
    float radius;
    float height;
    
    printf("Enter radius of the cylinder : ");
    scanf("%f", &radius);

    printf("Enter height of the cylinder : ");
    scanf("%f", &height);
   
    printf("The area of the cylinder is %f", 3.14 * radius * radius * height);

    return 0;
}