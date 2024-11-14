#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, guess, nguesses = 1;
    srand(time(0));
    n = rand() % 100 + 1; // Generates a random number between 1 and 100
    // Keep running the loop until the number is guessed
    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > n)
        {
            printf("Smaller number please!\n");
        }
        else if (guess < n)
        {
            printf("Larger number please!\n");
        }
        else
        {
            printf("You guessed it right in %d attempts.\n", nguesses);
        }
        nguesses++;
    } while (guess != n);

    return 0;
}