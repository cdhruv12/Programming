#include <stdio.h>
int f(int x, int y, int *c, int *d)
{
    int t = (x + y) / 2;
    if (x > y)
    {
        *d = x;
    }
    else
    {
        *c = x;
    }
    if (x < y)
    {
        *d = y;
    }
    else
    {
        *c = x;
    }
    return t;
}
int main()
{
    int a, b, c, d, e;
    printf("Enter 1st no.:\n");
    scanf("%d", &a);
    printf("Enter 2nd no.:\n");
    scanf("%d", &b);
    e = f(a, b, &c, &d);
    printf("Average=%d\n", e);
    printf("Largest=%d\n", d);
    printf("Smallest=%d\n", c);
    return 0;
}