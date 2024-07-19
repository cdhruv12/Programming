#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
} emp;

int main()
{
    emp e1;
    emp *ptr;

    ptr = &e1;
    ptr->code = 101;

    printf("Code is %d", e1.code);

    return 0;
}