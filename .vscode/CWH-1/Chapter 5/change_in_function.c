#include <stdio.h>

void change(int a);

int main()
{
    int b = 134;
    printf("The value of b before cahnge is %d \n", b);

    change(b);
    printf("The value of b after change is %d \n", b);

    return 0;
}

void change(int b)
{
    b = 77;
}