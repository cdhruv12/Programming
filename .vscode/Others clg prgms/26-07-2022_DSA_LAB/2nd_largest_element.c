#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, larg, seclarg;
    printf("enter the value of n:");
    scanf("%d", &n);
    int *a;
    a = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n the array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\n");
    larg = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > larg)
        {
            larg = a[i];
        }
    }
    seclarg = a[0];

    for (i = 0; i < n; i++)
    {
        if (a[i] != larg)
        {
            if (a[i] > seclarg)
                seclarg = a[i];
        }
    }
    printf("\n");
    printf("the second largest no is:");
    printf("%d", seclarg);
    return 0;
}