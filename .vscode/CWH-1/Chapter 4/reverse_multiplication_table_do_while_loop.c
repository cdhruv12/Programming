#include <stdio.h>

int main()
{
    int i = 11, n;

    printf("Enter integer=");
    scanf("%d", &n);

    do
    {
        i--;
        printf("\n %d X %d = %d \n", n, i, n * i);
    } while (i > 1);

    return 0;
}