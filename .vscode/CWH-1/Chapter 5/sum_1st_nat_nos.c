#include <stdio.h>
int sum(int n)
{
    if (n != 0)
    {
        return n + sum(n - 1);
    }
    else
    {
        return n;
    }
}
int main()
{
    int n;
    printf("Enter no.\n");
    scanf("%d", &n);
    printf("Sum of first %d no.s is %d\n", n, sum(n));
    return 0;
}
