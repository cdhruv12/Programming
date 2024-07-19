#include <stdio.h>

int main()
{
    int n = 1234, sum = 0;
    while (n > 0)
    {
        int d = n % 10;
        printf("%d\n", d);
        n = n / 10;
        sum = sum + d;
    }
    printf("Sum of digits : %d\n", sum);
    return 0;
}