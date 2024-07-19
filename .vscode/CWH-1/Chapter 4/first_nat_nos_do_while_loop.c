#include <stdio.h>

int main()
{
    int i = 0;
    int n;

    printf("Enter the nth value=\n");
    scanf("%d", &n);

    do
    {
        printf("The values are %d\n", i + 1);
        i++;
    } while (i < n);

    return 0;
}