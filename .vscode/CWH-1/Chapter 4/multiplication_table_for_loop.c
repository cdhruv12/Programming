#include <stdio.h>

int main()
{
    int n;

    printf("Enter integer = ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; ++i)
    {
        printf("\n%d X %d = %d \n", n, i, n * i);
    }
    return 0;
}