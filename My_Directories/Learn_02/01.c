#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    // int a, b;
    // printf("Enter the value of a & b: ");
    // scanf("%d%d", &a, &b);
    // (a>b)?printf("%d is greater.", a) : printf("%d is greater.", b);

    // float percentage, marks_jee;
    // printf("Enter your percentage in Boards: ");
    // scanf("%f", &percentage);
    // printf("Enter your marks in JEE: ");
    // scanf("%f", &marks_jee);
    // (percentage>=60.00 && marks_jee>=100.00)? printf("You are Eligible for admission!") : printf("You are NOT Eligible for admission!");
    
    int a, b, c;
    
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    
    c = (a > b) ? a : b;
    
    printf("The greater value is: %d", c);
    
    return 0;
}