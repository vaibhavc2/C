#include <stdio.h>
#include <string.h>

typedef struct student
{
    char name[20];
    int roll_no;
    int class;
} stdnt;

// typedef helps to create an alias for a datatype (generally used for the structures), hence we can type that alias, like stdnt here, in place of struct student;

int main()
{
    stdnt s1;
    stdnt *ptr;
    ptr = &s1;

    strcpy((*ptr).name, "Sarthak");
    (*ptr).roll_no = 1;
    (*ptr).class = 10;
    // Other way of doing the same thing: use ptr->property instead of the conventional way
    strcpy(ptr->name, "Sarthak");
    ptr->roll_no = 1;
    ptr->class = 10;

    printf("Name: %s\nRoll No: %d\nClass: %d", s1.name, s1.roll_no, s1.class);

    return 0;
}