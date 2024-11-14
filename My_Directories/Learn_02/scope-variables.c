#include <stdio.h>

// if x=3 is written only without int, then ans would be 3. but here x = 2 updates
// the variable x but int x=3 creates a new variable x which is created for a particular block.
// also, in other functions, same thing applies...

int x;
void f()
{
    x = 5;
}

int main()
{
    x = 1;
    {
        x = 2;
        {
            int x = 3;
        }
    }
    printf("%d ", x);
    f();
    printf("%d ", x);
    return 0;
}