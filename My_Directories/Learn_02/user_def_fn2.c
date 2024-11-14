//Function with no parameters but returning value
//WAP to add two numbers with the help of user defined function
//Input,logic will be placed in the function definition
//Output will be taken in the main() function
#include <stdio.h>
int add(); //Function declaration, it is only mandatory if function is defined after main!!
int main()
{
    int output;
    output = add(); //Function calling
    printf("\n Sum is:%d", output);
    return 0;
}
//Function definition
int add() //Function header
{
    //Function body
    int a, b, c;
    printf("\nEnter two numbers:");
    scanf("%d%d", &a, &b);
    c = a + b;
    return c;
}