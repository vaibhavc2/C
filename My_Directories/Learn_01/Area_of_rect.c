#include <stdio.h>

int main()

{
    int length;
    int breadth;
    
    printf("Enter length of the rectangle : ");
    scanf("%d", &length);

    printf("Enter breadth of the rectangle : ");
    scanf("%d", &breadth);
   
    printf("The area of the rectangle is %d", length * breadth);
    return 0;
}