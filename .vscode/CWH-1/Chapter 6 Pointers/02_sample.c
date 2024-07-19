#include <stdio.h>

int main()
{
    int i = 8;
    int *j = &i;

    printf("Add i=%u\n", &i);
    printf("Add i=%u\n", j);
    printf("Add j=%u\n", &j);
    printf("Value i=%d\n", i);
    printf("Value i=%d\n", *j);
    printf("Value i=%u\n", *(&i));
    printf("Add i=%u\n", *(&j));

    return 0;
}
