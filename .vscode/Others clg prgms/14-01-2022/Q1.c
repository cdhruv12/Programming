#include <stdio.h>
int fact(int n)
{
    int r = 1;
    int i;
    for (i = 1; i <= n; i++)
    {
        r = r * i;
    }
    return r;
}
int main()
{
    int j, k;
    for (j = 1; j <= 10; j++)
    {
        k = fact(j);
        if (j % 2 == 0)
        {
            printf("the even factorial is %d\n", k);
        }
        else
        {
            printf("the odd factorial is %d\n", k);
        }
    }
    return 0;
}