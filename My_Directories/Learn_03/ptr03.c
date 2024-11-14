#include <stdio.h>

int main()
{
    int a[] = {11, 22, 33, 44, 55};
    int *p1 = a, *p2 = &a[4];
    printf("%d\n", p2 - p1); // p2-p1 gives the number which must be added to p1 to get p2 --> no. of steps..., here 4
    // basically --> subtract the addresses & then divide by sizeof(data_type), here: 16/4 = 4

    printf("%d\n", p1 - p2); //here the ans will be negative

    // to get the exact difference between the addresses:
    printf("%d\n", (char *)p2 - (char *)p1); //i.e. 16 , here we basically typecast p1 & p2 to char * which has size of 1 byte. hence, 16/1 = 16.. hence same size..!!
    
    //Relational operators are also applicable to pointers:
    while (p1 <= p2)
    {
        printf("\n%d", *p1);
        p1++;
    }
    
    // p1=p1*2 is error, same with division, modulus

    int *p3 = &a[2];
    // p3 = p1 + p2;  is also not allowed, we can't add addresses, similar with other operations

    *p3++; // this means same as p3++.... exceptional case: becz of operator precedence ++ will happen first to p3 !! So it doesn't effect the value
    // hence *ptr++ is dame as ptr++, since it gets evaluated to *(ptr++)
    // same is with *++ptr, this also means ++ptr
    printf("\n\n%d", *p3);
    // Now, to make the above operation on the value:
    (*p3)++;
    printf("\n\n%d", *p3);

    int *p4 = a;
    int x = *p4++; // here, due to assignment operator, dereferencing will happen first hence x is given the value at which pointer is pointing, & then the address is incremented to next one
    printf("\n\n%d %d\n\n", x, *p4);


    return 0;
}