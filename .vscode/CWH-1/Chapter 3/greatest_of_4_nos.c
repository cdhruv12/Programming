#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Enter first no.\n");
    scanf("%d", &a);

    printf("Enter second no.\n");
    scanf("%d", &b);

    printf("Enter third no.\n");
    scanf("%d", &c);

    printf("Enter fourth no.\n");
    scanf("%d", &d);

    if (a >= b && a >= c && a >= d)
    {
        printf("%d is the greatest no.\n", a);
    }

    else if (b >= c && b >= d)
    {
        printf("%d is the greatest no.\n", b);
    }

    else if (c >= d)
    {
        printf("%d is the greatest no.\n", c);
    }

    else
    {
        printf("%d is the greatest no.\n", d);
    }

    return 0;
}