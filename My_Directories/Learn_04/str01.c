#include <stdio.h>

void print_str(char *ptr)
{
    while(*ptr!='\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    
}

int main()
{
    char str[] = {'V', 'a', 'i', 'b', 'h', 'a', 'v', '\0'};
    char string[] = "Vaibhav";
    // both are same in purpose! \0 is used for denoting that the string has ended! It is put in by default in the second way but in the first way, we have to explicitly put it to show the compiler that it is the end of the string.
    

    print_str(&string[0]);

    return 0;
}