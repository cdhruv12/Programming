#include <stdio.h>

int main()
{
    int i = 34;
    int *ptr1 = &i;
    int *ptr2 = &i;

    printf("Value of ptr2 is %u\n", ptr1);

    ptr2++;

    printf("Now value of ptr2 is %u\n", ptr2);
    printf("Value of ptr2 - ptr1 is %u byte\n", ptr2 - ptr1);

    return 0;
    
}