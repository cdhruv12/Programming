#include <stdio.h>

int main()
{
    int s = 0, n;

    printf("Enter the integer = ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        printf("\n %d X %d = %d \n", n, i, n * i);
        s = s + (n * i);
    }

    printf("Sum of the table = %d", s);

    return 0;
}