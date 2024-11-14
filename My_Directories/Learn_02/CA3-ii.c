#include <stdio.h>
#include <math.h>

void calculate(int *a, int *b, int *c)
{

    for (int i = *a; i <= *b; i++)
    { //i from value at a to value at b

        int temp = i, numberOfDigits = 0;

        while (temp != 0)
        {                     //repeat till temp becomes 0
            numberOfDigits++; //increment numberOfDigits
            temp = temp / 10; //divide temp by 10
        }

        temp = i;
        int sum = 0;
        while (temp != 0)
        {                                               //repeat till temp becomes 0
            sum = sum + pow(temp % 10, numberOfDigits); //calculate power of temp%10 raised to numberOfDigits and add to sum
            temp = temp / 10;                           //divide the number by 10
        }

        if (sum != i)
            *c = *c + 1; //increment value at c if sum is not same as number
    }
}

int main()
{
    int m, n, c = 0;

    printf("\n\t\t\t\tEnter the range in which the no. of non-Armstrong numbers is to be calculated: (from m to n)\n\n");
    
    printf("Value of m: ");
    scanf("%d", &m);
    printf("Value of n: ");
    scanf("%d", &n);

    calculate(&m, &n, &c);

    printf("\nCount of Non-Armstrong numbers from %d to %d is: %d\n", m, n, c);

    return 0;
}