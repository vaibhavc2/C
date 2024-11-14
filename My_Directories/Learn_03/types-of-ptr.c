#include <stdio.h>

int main()
{

    // Wild pointer: It is an uninitialised pointer which points to any Garbage address value
    int *p1;
    //program may stop working if we try to get the value at the garbage address mentioned:- using: printf("\n%d", *p1); hence the behaviour is quite unpredictable
    printf("\n%x", p1);

    // NULL pointer: It is a type of pointer which points no where, as zero address value is assigned to it
    int *p2 = NULL; //NULL is a macro, it is a pre-defined constant with value 0.
    int *p3 = 0;    //both ways are correct
    //Sometimes we don't know, where the pointer will point, so instead of keeping pointer uninitialized, we prefer to assign NULL address to the pointer, so that some random/ or garbage address is not assigned to it When the address of the memory location where the pointer will point is known, we can reinitialize the pointer with some another address
    //it is like initializing with no address, but still the pointer is not wild
    printf("\n%p %p", p2, p3); // prints full hexadecimal address
    printf("\n%x %x", p2, p3); // prints hexadecimal address
    //here also, deferencing i.e. requesting the value at the given address will give an unpredicable error just like in wild pointer, as there is no real address which is 0 in the memory

    //Generic(or Void) pointer: It is a type of pointer which can point towards any type of memory location/ or it can store the address of any type of variable.
    //For dereferencing a generic pointer, it is required to be typecasted with the specific type(type of the memory location towards where the pointer is currently pointing)
    void *p4 = NULL;
    int a = 12;
    float b = 99.947;
    char c = 'a';
    p4 = &a;
    printf("\n%d", *(int *)p4);
    p4 = &b;
    printf("\n%f", *(float *)p4);
    p4 = &c;
    printf("\n%c", *(char *)p4);

    //Constant pointer: It is a type of pointer,which will point towards only one memory location in its entire lifetime, it means we cannot reinitialize the constant pointer with some another address value.
    //If we try to reinitialize/ or assign some other address value, then compiler will give error.
    //Constant pointer is required to be initialized at the point of declaration only
    int *const p5 = &a;
    *p5 = *p5 + 1; //the value can be changed, but the address it is pointing to must not be changed
    printf("\n%d", *p5);

    int x = 50, y = 500;
    const int *p6; // this is not a constant pointer, rather it is pointing to a constant value
    // int const *p6;  //Other way..!!
    p6 = &x;
    printf("\n%d", *p6);
    // in this case, we can't change the value the pointer is pointing to via the pointer but indirectly, or it shows error depending on the compiler
    p6 = &y;
    y = y + 1; // this is valid
    // *p6 = *p6 - 5;  // this is not valid
    printf("\n%d", *p6);


    //Dangling pointer: It is a type of pointer, which points towards such a memory location which is already deleted/ or deallocated
    int *p8;
    {
        int z = 3;
        p8 = &z;
        printf("\n%d", *p8);
    }
    printf("\n%d", *p8); // here, the scope of variable z is over & hence it works as a dangling pointer
    // We should try to avoid the dangling pointer by making it a NULL pointer as soon as the scope of the variable assigned to the pointer is over:
    p8 = NULL;

    return 0;
}