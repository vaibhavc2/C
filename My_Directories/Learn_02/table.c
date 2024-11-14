#include <stdio.h>
#include <math.h>

void table(int n) {
    printf("\n\nThis is the multiplication table of %d: \n", n);
    for (int i = 1; i <= 10; i++)
    {
        printf("\n%d * %d = %d", n, i, n * i);
    }
}

int main() {
    for (int i = 1; i <= 20; i++)
    {
        table(i);
    }
    return 0;
}