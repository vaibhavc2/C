#include <stdio.h>
#include <math.h>

int main() {
    char ch='A';
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf("%c", ch);
        }
        int n = (int) ch;
        n++;
        ch = (char) n;
        printf("\n");
    }
    return 0;
}