#include <stdio.h>
#include <stdlib.h>

struct employee
{
    int empid;
    char ename[50];
    int age;
    float salary;
};

void displayMaxSal(struct employee *e)
{
    int maxSal = 0;
    struct employee maxEmployee;
    for (int i = 0; i < 5; i++)
    {
        if ((e + i)->salary > maxSal)
        {
            maxSal = (e + i)->salary;
            maxEmployee = *(e + i);
        }
    }

    printf("Details of the high employee:\n\nID: %d\nName: %s\nAge: %d\nSalary: %f", maxEmployee.empid,
           maxEmployee.ename, maxEmployee.age, maxEmployee.salary);
}

int main()
{

    struct employee *e;
    e = (struct employee *)malloc(5 * sizeof(struct employee));
    printf("Enter the details of 5 employees\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter employee ID: ");
        scanf("%d", &(e + i)->empid);
        printf("\nEnter employee name: ");
        getchar();
        fgets((e + i)->ename, 50, stdin);
        printf("\nEnter age: ");
        scanf("%d", &(e + i)->age);
        printf("\n Enter salary: ");
        scanf("%f", &(e + i)->salary);
    }

    displayMaxSal(e);

    return 0;
}