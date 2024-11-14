#include <stdio.h>

int main()
{
    char *ptr = "Hello."; // in this way string is stored in the memory and the address is given to the pointer. this is useful becuase we can reinitialise the value in this memory block using pointer!!
    ptr = "Bye.";
    printf("%s\n", ptr); //we can put \n in the string or in this normal way
    
    char str[] = "I'm Vaibhav.";
    printf("%s", str);
    return 0;
}