#include <stdio.h>

int main()
{
    int i = 0, n;

    printf("Enter integer \n");
    scanf("%d", &n);

    while (i < 10)
    {
        i++;
        printf("\n%d X %d = %d\n", n, i, n * i);
    }

    return 0;
}