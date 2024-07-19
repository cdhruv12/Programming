#include <stdio.h>

int main()
{
    int i = 0, s = 0, n;

    printf("Enter nth no. = ");
    scanf("%d", &n);

    do
    {
        ++i;
        s = s + i;
    } while (i < n);

    printf("\nSum of n no.s = %d", s);

    return 0;             
}