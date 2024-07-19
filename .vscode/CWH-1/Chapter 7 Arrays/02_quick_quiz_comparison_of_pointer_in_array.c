#include <stdio.h>

int main()
{
    int *ptr1, *ptr2;

    ptr2 = (int *)300;
    ptr1 = (int *)200;

    if (ptr1 > ptr2)
    {
        printf("ptr1 is greater than ptr2\n");
    }

    else if (ptr2 > ptr1)
    {
        printf("ptr2 is greater tha ptr\n");
    }

    else
    {
        printf("Both ptr1 and ptr2 are equal\n");
    }

    return 0;
}