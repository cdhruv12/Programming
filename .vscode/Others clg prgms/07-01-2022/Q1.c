#include <stdio.h>
int main()
{
    int a[5], *s, i, smlst;
    s = &a[0];
    printf("Enter 5-Elements:\n");
    for (i = 0; i < 5; i++, s++)
        scanf("%d", s);
    s = &a[0];
    smlst = *s;
    for (i = 0; i < 5; i++, s++)
        if (*s < smlst)
            smlst = *s;
    printf("\nsmallest element: %d", smlst);
    return 0;
}