#include <stdio.h>
#include <math.h>

void increment()
{
    auto int a=12; // auto is default....
    static int b=12; // static variables have a lifetime of a global variable, but the scope is still Local.
    ++a;
    ++b;
    printf("%d, %d\n", a, b);
}

//the static variable 'b' is not accessible outside its scope, i.e. outside increment function, but its value still remains in the memory
//whereas auto variables are destroyed outside the scope..!!

int main() {
    increment();
    increment();
    increment();
    static char ch; // static type varibales are always initialised to 0 by default.
    printf("%d", (int) ch);
    return 0;
}