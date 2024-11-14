// frequent operation variables can be stored in register memory in cpu for high speed access, but remember that we can't take input for such variables stored in CPU registers.
// since the address of such variables can't be requested.

#include <stdio.h>

void input_register()
{
    int x; //we can only take indirect input in a register varibale. So this is not actually efficient to do.
    scanf("%d", &x);
    register int y;
    y=x;
    printf("%d", y);
}

int main() {
    // register int n;
    // scanf("%d", &n); // this will give error if run !!
    
    for (register int i = 1; i <= 100; i++)
    {
        printf("%d\n", i);
    }

    input_register();

    return 0;
}