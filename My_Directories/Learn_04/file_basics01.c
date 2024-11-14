#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("sample.txt", "r"); // for reading the file, it returns NULL if the file doesn't exist
    // ptr = fopen("sample.txt", "w"); // for writing to the file & replacing the old text with new text
    // ptr = fopen("sample.txt", "a"); // for appending i.e. adding the text wihtout overwriting the existing one.

    // fprintf(ptr, " Chopra."); //function used to print content on a file which has been opened in either of write or append mode

    int n;

    fscanf(ptr, "%d", &n); //function used to input from a file whoch has been opened in read-mode

    fclose(ptr); // this is used to close the open file 

    printf("The value of the number stored in the file is: %d", n);

    return 0;
}