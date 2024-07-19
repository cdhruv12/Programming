#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter 1st no.\n");
    scanf("%d", &a);

    printf("Enter 2nd no.\n");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("The no.s after swapping\nNow 1st no. = %d\nAnd\nNow 2nd no. = %d", a, b);

    return 0;
}