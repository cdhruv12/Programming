#include <stdio.h>

int main()
{
    int n;

    printf("Enter the starting value\n");
    scanf("%d", &n);

    for (int i = n; i; i--)
    {
        printf("The values are %d\n", i);
    }
    
    return 0;
}