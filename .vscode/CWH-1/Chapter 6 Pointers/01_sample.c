#include <stdio.h>

int main()
{
    int i = 34;
    int *j = &i;

    printf("Value of i = %d\n", i);
    printf("Address of i = %u\n", &i);
    printf("Adress of i = %u\n", j);
    printf("Adress of j = %u\n", &j);
    printf("Value of i = %d\n", *j);
    printf("Value of j = %u\n", *(&j));
    printf("Value of i = %u\n", *(&i));

    return 0;
}