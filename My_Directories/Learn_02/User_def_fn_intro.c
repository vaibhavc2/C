//Function with no parameters and no returning value
//WAP to add two numbers with the help of user defined function
//Input,logic and output will be placed in the function definition
#include <stdio.h>
void add(); //Function declaration
int main()
{
    add(); //Function calling
    return 0;
}
//Function definition
void add() //Function header
{
    //Function body
    int a, b, c;
    printf("\nEnter two numbers:");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("\nSum is:%d", c);
}