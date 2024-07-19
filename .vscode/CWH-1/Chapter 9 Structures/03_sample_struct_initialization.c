#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[34];
};

int main()
{
    struct employee ABC = {100, 123.456, "Dhruv"};

    printf("Code is %d\n", ABC.code);
    printf("Salary is %.3f\n", ABC.salary);
    printf("Name is %s\n", ABC.name);

    return 0;
}