#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(6 * sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("Enter %d element:\n", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("Value of %d element is %d\n", i + 1, ptr[i]);
    }
    // Reallocate ptr using realloc()
    ptr = realloc(ptr, 3 * sizeof(int));
    for (int i = 0; i < 3; i++)
    {
        printf("Enter %d element:\n", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Value of %d element is %d\n", i + 1, ptr[i]);
    }

    return 0;
}