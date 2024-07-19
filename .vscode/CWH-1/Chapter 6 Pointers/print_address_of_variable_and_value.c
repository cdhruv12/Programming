#include <stdio.h>

int main()
{
    int a = 6;
    int *ptr;
    ptr = &a;

    printf("Address of the variable a is %u\n", ptr);
    printf("Value of the variable a is %d\n", *ptr);

    return 0;
    
}