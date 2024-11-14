#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    char character;

    printf("Enter an English aphabet: ");
    scanf("%c", &character);

    int char_num = (int) character;

    if (char_num>=97 && char_num<=122)
    {
        printf("The entered alphabet is in lower-case.");
    }
    else
    {
        printf("The entered alphabet is in upper-case.");
    }
    
    return 0;
}