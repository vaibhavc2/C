#include <stdio.h>
#include <math.h>
//Armstrong numbers between 1 to 10000
int armstrong(int num)
{
    int originalNum = num, remainder, n = 0, status;
    float result = 0.0; // this is taken in float beacuse the pow function used accepts and releases outputs in double data type.
    // store the number of digits of num in n
    for (originalNum = num; originalNum != 0; ++n)
    {
        originalNum /= 10;
    }

    for (originalNum = num; originalNum != 0; originalNum /= 10)
    {
        remainder = originalNum % 10;

        // store the sum of the power of individual digits in result
        result += pow(remainder, n);
    }

    // if num is equal to result, the number is an Armstrong number
    if ((int)result == num)
        status = 1;
    else
        status = 0;

    return status;
}

int main()
{
    for (int i = 1; i <= 10000; i++)
    {
        if (armstrong(i))
        {
            printf("%d\n", i);
        }
    }

    return 0;
}