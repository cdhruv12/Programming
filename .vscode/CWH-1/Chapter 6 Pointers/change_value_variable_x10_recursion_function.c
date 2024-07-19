#include <stdio.h>

void change(int *ptr)
{
    (*ptr) *= 10;
}

int main()
{
    int a;

    printf("Enter value of a is \n");
    scanf("%d", &a);

    int *ptr = &a;

    printf("Current value of a is %d\n", a);

    change(ptr);

    printf("Now value of a is %d\n", *ptr);

    return 0;
}