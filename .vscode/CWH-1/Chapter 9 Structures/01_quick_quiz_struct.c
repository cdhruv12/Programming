#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee e1, e2, e3;

    printf("\nEnter the value of code of e1 : ");
    scanf("%d", &e1.code);
    printf("\nEnter the salary of e1 : ");
    scanf("%d", &e1.salary);
    printf("\nEnter the name of e1 : ");
    scanf("%s", e1.name);

    printf("\nEnter the value of code of e2 : ");
    scanf("%d", &e2.code);
    printf("\nEnter the salary of e2 : ");
    scanf("%d", &e2.salary);
    printf("\nEnter the name of e2 : ");
    scanf("%s", e2.name);

    printf("\nEnter the value of code of e3 : ");
    scanf("%d", &e3.code);
    printf("\nEnter the salary of e3 : ");
    scanf("%d", &e3.salary);
    printf("\nEnter the name of e3 : ");
    scanf("%s", e3.name);

    // printf("The code of e1 is %d\n", e1.code);
    // printf("The salary of e1 is %.3f\n", e1.salary);
    // printf("The name of e1 is %s\n", e1.name);

    // printf("The code of e2 is %d\n", e2.code);
    // printf("The salary of e2 is %.3f\n", e2.salary);
    // printf("The name of e2 is %s\n", e2.name);

    // printf("The code of e3 is %d\n", e3.code);
    // printf("The salary of e3 is %.3f\n", e3.salary);
    // printf("The name of e3 is %s\n", e3.name);

    return 0;
}