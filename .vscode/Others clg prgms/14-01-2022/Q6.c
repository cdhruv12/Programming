#include <stdio.h>
int fib(int, int);
int fact(int);
int fib(int a, int b)
{
    int c;
    for (c = a + b; c <= 8;)
    {
        return c;
    }
}
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
    int no = 6;
    int l, p = 0, q = 1;
    int k;
    l = p + q;
    float sum = 0.0;
    for (k = 1; k <= no; k++)
    {
        p = q;
        q = l;
        if (k < 3)
        {
            if (k % 2 == 1)
            {
                sum += p / fact(k);
            }
            else
            {
                sum += fact(k) / q;
            }
        }
        else
        {
            if (k % 2 == 1)
            {
                sum += fib(p, q) / fact(k);
            }
            else
            {
                sum += fact(k) / fib(p, q);
            }
        }
    }
    printf("%f", sum);
    return 0;
}