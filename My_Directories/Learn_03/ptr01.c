#include <stdio.h>
#include <math.h>
int main()
{

    //A pointer can point towards any memory location at any time(Type of the variable and type of pointer should be same)

    int var = 10;
    int *ptr;
    ptr = &var;

    int a = 20;
    int *p = &a;

    printf("%d %d", *ptr, *p);
    printf("\n%d %d", ptr, p); // this prints the addresses of the varibales the pointer is pointing to, in decimal system
    printf("\n%u %u", ptr, p); // same as above
    printf("\n%x %x", ptr, p); // this prints the addresses of the varibales the pointer is pointing to, in hexa-decimal system
    // *ptr refers to the value at the address stored by the pointer, but ptr gives the address itself

    *ptr = 4; // this will change the value of var
    printf("\n%d", var);

    int b = 100;
    p = &b; // this pointer now points to a different variable
    printf("\n%d", *p);

    // we can also see the address of the pointer where it stores the address of the variable it points to.
    printf("\n%x %x", &ptr, &p);

    char ch = 'c';
    char *pch = &ch;
    printf("\n%d %d %d %d", sizeof(p), sizeof(pch), sizeof(ch));  // a pointer uses 4 or 8 bytes (depending on the compiler) to store an address

    // Multiple pointers can point to same memory location(address) at the same time!
    int *p1 = &b; // address of b is now stored in two pointers simultaneously...!
    printf("\n%d", *p1);

    return 0;
}