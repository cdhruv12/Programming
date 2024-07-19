#include <stdio.h>
int max(int a, int b)
{
    int c;
    c = (a > b) ? a : b;
    return c;
}
int main()
{
    int c, d;
    scanf("%d%d", &c, &d);
    printf("the max no is %d\n", max(c, d));
    return 0;
}