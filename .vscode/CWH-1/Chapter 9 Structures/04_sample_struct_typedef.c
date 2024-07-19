#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[20];
} emp;

void show(emp emp1) // emp is struct emplyee thing acting like int function and emp1 is just used to avoid confusion
{
    printf("The Code is %d\n", emp1.code);
    printf("The Salary is %.3f\n", emp1.salary);
    printf("The Name is %s\n", emp1.name);
}

int main()
{
    emp e1;
    emp *ptr;

    ptr = &e1;

    ptr->code = 101;
    ptr->salary = 1234.567;
    strcpy(ptr->name, "Dhruv Chauhan");

    show(e1);

    return 0;
}