#include <stdio.h>
#include "extern2.c"

void f() {
    extern int x;
    x++;
    printf("\n%d", x);
}
// extern storage class tells compiler to search for a global variable in the same file OR on another file.
int main() {

    extern int x; // accessing the external function using extern
    printf("%d", x); // default value of a variable with extern storage class is 0.
    f();
    f();
    printf("\n%d\n\n", x);

    extern int alu; // this variable is defined in the file included above in line 2
    scanf("%d", &alu);
    printf("\n%d is what you entered.", alu);
    return 0;
}
// here we must use extern to acess the varibale in a block., but the values are changed and reflected gloablly....!!
int x; 
