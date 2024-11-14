// #include <stdio.h>
// int main()
// {
//     int num, i;

//     printf("Enter a Natural number: ");
//     scanf("%d", &num);

//     if (num > 1)
//     {
//         for (i = 2; i < num; i++)
//         {
//             if (num % i == 0)
//             {
//                 printf("%d is a composite number.", num);
//                 break;
//             }
//             else
//             {
//                 printf("%d is a prime number.", num);
//             }
//         }
//     }
//     else
//     {
//         printf("The number %d is neither prime nor composite!", num);
//     }
// }
#include <stdio.h>
int main()
{
    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; ++i)
    {
        // condition for non-prime
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (n == 1)
    {
        printf("1 is neither prime nor composite.");
    }
    else
    {
        if (flag == 0)
            printf("%d is a prime number.", n);
        else
            printf("%d is not a prime number.", n);
    }

    return 0;
}