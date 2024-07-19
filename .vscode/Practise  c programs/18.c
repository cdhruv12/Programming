#include <stdio.h>

int main()
{
    int n, i, j, p = 0, q = 0;
    int size;
    printf("enter the value of n:");
    scanf("%d", &n);
    int a[n], b[n];
    printf("\n enter the element of a array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        p++;
    }
    printf("\n%d", p);
    printf("\n enter the element of a array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
        q++;
    }
    printf("\n%d", q);
    size = p + q;
    printf("\n %d", size);
    printf("\n");
    for (i = 0; i < q; i++)
    {
        a[p + i] = b[i];
    }
    printf("\n----\n");
    for (i = 0; i < size; i++)
    {
        printf("%d  ", a[i]);
    }

    return 0;
}