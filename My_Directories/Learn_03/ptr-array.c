#include <stdio.h>

int main()
{
    int a[] = {1,2,3,4,5};
    // the name of the array includes the basic starting address of the array i.e. a[0]
    int *ptr = a; // or int *ptr = &a[0];

    //Pointer to 1D array: When we initialize the pointer with the address of the array(Base address), the pointer will start pointing towards array When a pointer is pointing towards array, we can tranverse(or access) the elements of the array through dereferencing Syntax:
    // Example 
    printf("\n%d",*ptr); //1
    ptr++; //ptr=ptr+1; 
    // Consider base address of the given array is:2000 ptr=a; ptr++ --> ptr=ptr+1 --> ptr= ptr+1*sizeof_data_type --->ptr=ptr+1*4--->ptr=2000+4=2004[Address of second element] 
    printf("\n%d",*ptr); //2
    ptr++;
    printf("\n%d",*ptr); //3
    ptr--;
    printf("\n%d\n\n",*ptr); //2

    // accessing all the values of the array one by one using loop
    ptr = a;
    for (int i = 0; i < 5; i++)
    {
        printf("%d: ", ptr); //addresses
        printf("%d,", *ptr); //values
        ptr++;
    }
    //alternative way
    printf("\n\n");
    ptr = a;
    for (int i = 0; i < 5; i++)
    {
        printf("%d: ", ptr+i); //addresses
        printf("%d,", *(ptr+i)); //values
    }

    return 0;
}