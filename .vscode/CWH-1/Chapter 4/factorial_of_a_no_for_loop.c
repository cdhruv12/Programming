#include <stdio.h>

int main()
{
    int n, f = 1;

    printf("Enter no. = ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }

    printf("\nFactorial of %d  = %d ", n, f);

    return 0;
}