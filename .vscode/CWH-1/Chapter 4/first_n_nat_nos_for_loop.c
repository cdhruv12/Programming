#include <stdio.h>

int main()
{
    int n;

    printf("Enter the nth no.=\n");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        printf("The values are= %d\n", i);
    }
    
    return 0;
}