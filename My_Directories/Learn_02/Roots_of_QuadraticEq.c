#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    double a, b, c, D, r1, r2;

    printf("\nEnter the coefficients of the quadratic equation: ");
    scanf("%lf%lf%lf", &a, &b, &c);

    D = pow(b, 2.00) - 4 * a * c;

    if (D > 0)
    {
        r1 = (-b + pow(D, 0.5)) / 2 * a;
        r2 = (-b - pow(D, 0.5)) / 2 * a;
        printf("\nThe roots of the equation are real and distinct: %.2lf & %.2lf", r1, r2);
    }
    else if (D == 0)
    {
        r1 = r2 = (-b) / 2 * a;
        if (r1=r2=-0.00)
        printf("\nThe roots of the equation are real and equal.\nTherefore, both roots = %.2lf", r1);
    }
    else
    {
        printf("\nThe roots of the equation are imaginary.");
    }
    
    return 0;
}