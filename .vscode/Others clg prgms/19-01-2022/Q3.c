#include <stdio.h>

int main()
{
    int a[6], i, j, temp;

    printf("Enter elements: ");
    for (int i = 0; i < 6; ++i)
        scanf("%d", a + i);

    printf("You entered: \n");
    for (int i = 0; i < 6; ++i)
    {
        printf("%d\n", *(a + i));
    }
    for (i = 0, j = 5; i < j; i++, j--)
    {
        temp = *(a + i);
        *(a + i) = (a + j);
        *(a + j) = temp;
    }
    for (int i = 0; i < 6; ++i)
    {
        printf("%d", *(a + i));
    }

    return 0;
}