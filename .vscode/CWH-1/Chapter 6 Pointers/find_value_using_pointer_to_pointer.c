#include <stdio.h>
int main()
{
    int i;
    int *ptr = &i;
    printf("Value of i %u\n", ptr);
    ptr++;

    return 0;
}