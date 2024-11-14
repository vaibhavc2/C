#include <stdio.h>
#include <string.h>

int strlength(char *str)
{
    int count=0;
    while (*str!='\0')
    {
        count++;
        str++;
    }
    return count;
}

int main()
{
    char *st = "Vaibhav";
    int a = strlen(st);
    // strlen function counts the no. of characters in the given string excluding the default null character at the end.

    // making the same function in our own custom way & calling it here
    int b = strlength(st);

    printf("The length of the string st is: %d & %d", a, b);

    char *string = " Chopra.";

    char str[20];

    strcpy(str, string); // this function will copy the content of second string into the first string passed to it.

    printf("\nNow the string is%s", str);

    char s[20] = "My name is Vaibhav";

    strcat(s, string); // used to concatenate two strings. The concatenated string is stored in the first string, hence the first string should have enough space to accommodate it. Also we must add space in the end by ourselves as the strings get concatenated as it is.

    printf("\n%s", s);

    char *hlo = "Zello";
    int x = strcmp(st, hlo); // This function is used to compare two strings. It returns: 0 if strings are equal, Negetive value if first strings first mismatching character's ASCII value is lesser than second string's corresponding mismatching character. It returns positive values otherwise.
    printf("\n%d", x);

    char *abc = "For";
    char *def = "Joke";
    int c = strcmp(abc, def);
    printf("\n%d", c);

    return 0;
}