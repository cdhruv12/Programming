#include <stdio.h>

int main()
{
    int n, s = 0;

    printf("Enter the nth no.=");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i)
    {
        s = s + i;
    }

    printf("\nThe sum of n no.s= %d", s);

    return 0;
}