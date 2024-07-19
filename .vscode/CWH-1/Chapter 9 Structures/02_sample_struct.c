#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

int main()
{
    struct employee facebook[100];

    facebook[0].code = 100;
    facebook[0].salary = 1000.246;
    strcpy(facebook[0].name, "Dhruv");

    facebook[1].code = 200;
    facebook[1].salary = 2000.246;
    strcpy(facebook[1].name, "Karan");

    facebook[2].code = 300;
    facebook[2].salary = 3000.246;
    strcpy(facebook[2].name, "Sharan");

    printf("The code of 1st employee is %d\n", facebook[0].code);
    printf("The salary of 1st employee is %.3f\n", facebook[0].salary);
    printf("The name of 1st employee is %s\n", facebook[0].name);

    printf("The code of 2nd employee is %d\n", facebook[1].code);
    printf("The salary of 2nd employee is %.3f\n", facebook[1].salary);
    printf("The name of 2nd employee is %s\n", facebook[1].name);

    printf("The code of 3rd employee is %d\n", facebook[2].code);
    printf("The salary of 3rd employee is %.3f\n", facebook[2].salary);
    printf("The name of 3rd employee is %s\n", facebook[2].name);

    printf("Done");

    return 0;
}