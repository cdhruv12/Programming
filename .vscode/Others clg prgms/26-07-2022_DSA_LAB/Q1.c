#include <stdio.h>
typedef struct employee
{
    int empid;
    char ename[10];
    int age;
    float salary;
} emp;

int main()
{
    emp e1;
    printf("Enter employee id \n");
    scanf("%d", &e1.empid);
    printf("Enter employee name \n");
    getchar();
    fgets(e1.ename, 10, stdin);
    printf("Enter employee age \n");
    scanf("%d", &e1.age);
    printf("Enter employee salary \n");
    scanf("%f", &e1.salary);
    printf("\n\n********** Employee Details **********\n\n");
    printf("Employee id is %d\n", e1.empid);
    printf("Employee name is %s\n", e1.ename);
    printf("Employee age is %d\n", e1.age);
    printf("Employee salary is %.3f\n", e1.salary);
    return 0;
}