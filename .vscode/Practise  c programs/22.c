#include <stdio.h>

int main()
{
    int r, c, small[10][10];
    int min = small[0][0];
    printf("Enter rows and columns of arrays :\n");
    scanf("%d %d", &r, &c);
    printf("Enter elements of the arrays :\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Element[%d][%d]:", i + 1, j + 1);
            scanf("%d", &small[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (min > small[i][j])
            {
                min = small[i][j];
            }
        }
        printf("\n");
    }
    printf("The smallest no. in the 2D arrays is %d\n", min);
    return 0;
}