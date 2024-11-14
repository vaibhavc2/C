#include <stdio.h>
#include <math.h>

int main() {
    int x, y = 1;
    x = printf("\ny: %d", y); // printf is int printf() in stdio.h file. So, it returns the no of characters printed to an integer variable.
    printf("\nx: %d", x); // it treats \n and format specifiers like %d as a single character...!!

    if (printf("\ngreat\n")) // here, printf prints and returns 6 which is TRUE. So, if condition works
    {
        printf("OK");
    }
    else
    {
        printf("N");
    }

    // FIELD WIDTH in printf format specifier to print in right justification !!

    printf("\n%10d", x);// >> %(no)d means that 'that' much no of spaces will be reserved first & then they will be adjusted acc to number of characters.
    printf("\n%20d", x);
    printf("\n%30d", x);
    printf("\n\n%4d", 1);
    printf("\n%4d", 12);
    printf("\n%4d", 123);
    printf("\n%4d\n\n", 1234);

    printf("%010d\n", 123); //this prints 123 with 7 0s in the front
    printf("%0100d", 123); //this prints 123 with 97 0s in the front
    printf("\n%.10d", 123); //this also  prints 123 with 7 0s in the front

    // FIELD PRECISION in printf format specifier to print in right justification !!

    printf("\n%.2f", 1.566779923); //for float & double values, & last digit is either rounded up or not but not rounded down
    // the format is %(width).(precision)f
    double a = 6.79432978649;
    printf("\n%10.3lf", a);
    printf("\n%010.3lf", a); // this prints 0s in the front
    printf("\n%-10.3lf", a); // this prints on the default left side but then trails left over spces, e.g. here 5 trailing spaces

    printf("\n%e", a); //%e or %E will print the float & double values in exponent-mantissa form.
    printf("\n%E", a);
    printf("\n%g", a); // %g will display the output in the shortest possible format. this is also for float and double values only
    printf("\n%p", &a); // %p or %X will display the COMPLETE address of the variable in hexadecimal format
    printf("\n%x", &a); // %x will display the address of the variable in hexadecimal format in small alphabet letters
    printf("\n%u\n\n", &a); // %u will display the address of the variable in decimal format


    // scanf also returns int. It returns the number of inputs we have taken.

    int n1, n2, p, n3, n4;
    //p = scanf("%d%d", &n1, &n2);
    printf("The no. of inputs taken: %d\n", scanf("%d%d", &n1, &n2));
    p = scanf("%d^%d", &n3, &n4); // some special charcters may be used to separate the inputs like this
    printf("\"\\n The no. of inputs \\ taken: %d\n", p); //this way we can also display \n, \  and " by using \ in front of them
    printf("100%%"); //displays a %
    return 0;
}