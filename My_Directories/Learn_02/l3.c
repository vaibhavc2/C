#include <stdio.h>
#include <math.h>

int main() {
    for (int i = 65; i <= 69; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf("%c", (char) i);
        }
        printf("\n");
    }
    return 0;
}