#include <stdio.h>

int main()
{
    int i = 0, s = 0, n;

    printf("Enter the nth no. = ");
    scanf("%d", &n);

    while (i < n)
    {
        ++i;
        s = s + i;
    }

    printf("\n The sum of nth no. = %d ", s);

    return 0;
}