#include <stdio.h>
int power(int b, int a)
{
    if (a != 0)
    {
        return (b * power(b, a - 1));
    }
    else
    {
        return 1;
    }
}
int main()
{
    int b, p, result;
    printf("Enter no.\n");
    scanf("%d", &b);
    printf("Enter power\n");
    scanf("%d", &p);
    result = power(b, p);
    printf("%d^%d=%d\n", b, p, result);
    return 0;
}
