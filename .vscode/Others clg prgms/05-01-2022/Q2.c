#include <stdio.h>
int main()
{
    int i, j, l;
    int z[3][3], o[6][6] = {{1, 2, 3, 4, 5, 6}, {7, 8, 9, 10, 11, 12}, {13, 14, 15, 16, 17, 18}, {19, 20, 21, 22, 23, 24}, {25, 26, 27, 28, 29, 30}, {31, 32, 33, 34, 35, 36}};
    printf("For the original matrix:\n");
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("%d\t", o[i][j]);
        }
        printf("\n");
    }
    printf("The multiplication of the matrices will be \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            z[i][j] = 0;
            for (l = 0; l < 3; l++)
            {
                z[i][j] += o[i][l] * o[l + 3][j + 3];
            }

            printf("%d\t", z[i][j]);
        }
        printf("\n");
    }
    return 0;
}
