#include <stdio.h>
int main()
{
    int a = 10, b = 20, c = 30;
    int *p1 = &a, *p2 = &b;
    *p1 = *p1 + 1; //a=a+1,a=11
    *p2 = 50;      //b=50
    p1 = p2;       //p1 and p2 will point towards b
    *p1 = 90;      //b=90
    // with *, the value it is pointing to is changed (except in ddefault declaration)
    // without *, the address it is pointing to is changed or referred to 
    printf("\n%d %d", a, b);
    return 0;
}