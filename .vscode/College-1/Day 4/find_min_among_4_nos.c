#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Enter 1st no.\n");
    scanf("%d", &a);

    printf("Enter 2nd no.\n");
    scanf("%d", &b);

    printf("Enter 3rd no.\n");
    scanf("%d", &c);

    printf("Enter 4th no.\n");
    scanf("%d", &d);

    if (a = b = c = d)
    {
        printf("All no.s are equal");
    }

    else if (b <= a && b <= c && b <= d)
    {
        printf("The 2nd no. %d is the min. no.\n", b);
    }

    else if (c <= a && c <= b && c <= d)
    {
        printf("The 3rd no. %d is the min. no.\n", c);
    }

    else if (d <= a && d <= b && d <= c)
    {
        printf("The 4th no. %d is the min. no.\n", d);
    }

    else if (a <= b && a <= c && a <= d)
    {
        printf("The 1st no. %d is the min no.\n", a);
    }

    return 0;
}