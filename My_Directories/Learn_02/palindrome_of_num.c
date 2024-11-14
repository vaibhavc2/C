#include <stdio.h>
int main()
{
    int num, rev = 0, rem, original;
    printf("\n Enter number:");
    scanf("%d", &num);
    original = num;
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    if (original == rev)
        printf("\n Number is a Palindrome");
    else
        printf("\n Number is not a Palindrome");
    return 0;
}