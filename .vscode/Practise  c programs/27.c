#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, *ptr2;
    ptr = (int *)malloc(6 * sizeof(int));
    for (int i = 0; i < 600000; i++)
    {
        printf("Enter %d element:\n", i + 1);
        scanf("%d", &ptr[i]);
        ptr2 = (int *)malloc(600000 * sizeof(int));
        free(ptr2);
    }

    return 0;
}