// structures in C programming
#include <stdio.h>
#include <string.h>

struct employee
{
    int id;
    char name[20];
    float salary;
};

// strucutures are also stored in contiguous memory locations a bit like an extended array, adjusted acc. to the data types

struct employee fn()
{
    struct employee e3 = {1003, "Raju", 5499.99};
    return e3;
} // function which returns a structure!!

int main()
{ 
    struct employee e1;
    e1.id = 1001;
    // e1.name = "Rajnish Sethi"; ---> this won't work!
    strcpy(e1.name, "Rajnish Sethi");
    e1.salary = 3465.45;

    struct employee e2 = {1002, "Ram Das", 4900.50}; // another convenient way to initialise a structure!

    printf("ID: %d\nName: %s\nSalary: $%.2f", e1.id, e1.name, e1.salary);
    printf("\n\nID: %d\nName: %s\nSalary: $%.2f", e2.id, e2.name, e2.salary);

    return 0;
}