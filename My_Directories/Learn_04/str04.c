#include <stdio.h>

int main()
{
    char st[20];
    printf("Enter your name: ");
    gets(st); // to input a multi-word string
    printf("Your name is ");
    puts(st); // prints the string and places the cursor on the next line
    printf(".");
    return 0;
}