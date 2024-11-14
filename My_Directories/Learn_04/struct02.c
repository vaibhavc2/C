#include <stdio.h>
#include <string.h>

struct employee
{
    char name[20];
    int id;
    float salary;
};

void input(int *n, struct employee my_company[])
{
    for (int i = 0; i < *n; i++)
    {
        my_company[i].id = i + 1;
        printf("\nEnter name of Employee_%d: ", my_company[i].id);
        scanf("%s", &my_company[i].name);


        printf("Enter the salary of the Employee: $");
        scanf("%f", &my_company[i].salary);
    }
}

void print(int *n, struct employee my_company[])
{
    for (int i = 0; i < *n; i++)
    {
        printf("ID: %d\nName: %s\nSalary: $%.2f\n\n", my_company[i].id, my_company[i].name, my_company[i].salary);
    }
}

int main()
{
    int n;
    printf("Enter the no. of employees in the company: ");
    scanf("%d", &n);

    struct employee my_company[n];

    input(&n, my_company);
    printf("\n");
    print(&n, my_company);

    return 0;
}