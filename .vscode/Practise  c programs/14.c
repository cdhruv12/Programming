#include <stdio.h>

int main()
{
    int a = 12, b = 23, c = 34;
    if (a > b > c)
    {
        if (b > c)
        {
            printf("2nd largest no. is %d\n", b);
        }
        else
        {
            printf("2nd largest no. is %d\n", c);
        }
    }
    if (c > b < a)
    {
        if (b > a)
        {
            printf("2nd largest no. is %d\n", b);
        }
        else
        {
            printf("2nd largest no. is %d\n", a);
        }
    }

    return 0;
}