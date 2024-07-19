#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(4 * sizeof(int));
    for (int i = 0; i < 4; i++)
    {
        printf("Enter %d element:\n", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("Value of %d element is %d\n", i + 1, ptr[i]);
    }
    ptr = realloc(ptr, 10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        printf("Enter %d element:\n", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("Value of %d element is %d\n", i + 1, ptr[i]);
    }
    return 0;
}