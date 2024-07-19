#include <stdio.h>

int main()
{
    int i = 1, n, f = 1;

    printf("Enter no. = ");
    scanf("%d", &n);

    do
    {
        i++;
        f = f * i;
    } while (i < n);

    printf("factorial of %d = %d", n, f);

    return 0;
}