#include <stdio.h>

int main()
{
    char str[30];
    printf("Enter your name: ");
    scanf("%s", str); // we know that str implies &str[0]
    //scanf can't be used to input multi word strings with spaces
    printf("Your name is: %s", &str[0]);
    return 0;
}