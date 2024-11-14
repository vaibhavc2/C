#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    // int num1, num2;
    // printf("Enter two numbers: ");
    // scanf("%d%d", &num1, &num2);
    // if (num1 > num2)
    // {
    //     printf("%d is greater than %d.\n", num1, num2);
    // }
    // else
    // {
    //     printf("%d is greater than %d.", num2, num1);
    // }

    // char ch;
    // printf("Enter a charater: ");
    // scanf("%c", &ch);
    // if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'|| ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    // {
    //     printf("\nThe entered character %c is a vowel.", ch);
    // }
    // else
    // {
    //     printf("\nThe entered character %c is not a vowel.", ch);
    // }

    // char ch;
    // printf("Enter a charater: ");
    // scanf("%c", &ch);
    // if (ch>=97 && ch<=122)
    // {
    //     ch-=32;
    //     printf("\nEntered character in uppercase is %c.", ch);
    // }
    // else
    // {
    //     printf("\nEntered character %c is already in uppercase.", ch);
    // }
    
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num%7==0 || num%9 == 0)
    {
        printf("%d is divisible by 7 or 9.", num);
    }
    else
    {
        printf("%d is neither divisible by 7 nor 9.", num);
    }
    
    return 0;
}