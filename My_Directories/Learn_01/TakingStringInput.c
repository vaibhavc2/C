#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    // char first_name[20], last_name[20];
    // printf("Enter your Full Name: ");
    // scanf("%s%s", &first_name, &last_name);
    // printf("Hello %s %s!\n", first_name, last_name);

    char name[50];
    printf("Enter your Full Name: ");
    scanf("%[^\n]%*c", &name);
    printf("Hello %s!\n", name);

    return 0;
}