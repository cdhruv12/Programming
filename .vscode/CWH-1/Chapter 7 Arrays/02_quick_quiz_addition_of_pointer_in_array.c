#include <stdio.h>

int main()
{
    int i = 34;
    int *ptr = &i;

    printf("Value of ptr = %u\n", ptr);

    ptr++;

    printf("Now value of ptr = %u\n", ptr);

    return 0;
    
}