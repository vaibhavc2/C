#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("sample.txt", "w");
    // if (fptr == NULL)
    // {
    //     printf("This file doesn't exist.");
    // }
    fprintf(fptr, "I'll show you how Great I am.");
    fclose(fptr);

    return 0;
}