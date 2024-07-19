#include <stdio.h>

int main()
{
    int n, p;

    printf("Enter no. = ");
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            p = 0;
            break;
        }
    }

    if (p == 0 && n != 2)
    {
        printf("\n%d is not a prime no.\n", n);
    }

    else
    {
        printf("\n%d is a prime no.\n", n);
    }

    return 0;
}