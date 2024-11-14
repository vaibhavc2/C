#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("sample.txt", "r");
    char c;
    int count = 0;
    while (c != EOF) // EOF is End Of File
    {
        c = fgetc(fptr); // fgetc reads the file character by character and thus gives a single character at a time
        printf("%c", c);
        count++;
    }
    fclose(fptr);
    printf("\nThe file has %d characters.", count-1);

    fptr = fopen("sample.txt", "a");
    fputc('v', fptr); //fputc prints a single character in the file.
    fclose(fptr);

    return 0;
}