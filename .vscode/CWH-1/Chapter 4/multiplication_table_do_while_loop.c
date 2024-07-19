#include <stdio.h>

int main()
{
    int i = 0, n;

    printf("Enter integer \n");
    scanf("%d", &n);

    do
    {
        i++;
        printf("\n%d X %d = %d\n", n, i, n * i);
    } while (i < 10);

    return 0;
}