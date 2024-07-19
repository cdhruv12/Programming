#include <stdio.h>
int main()
{
    int arr[10][10], m, n, i, k = 0, size = 0;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);

    printf("Matrix : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d ", arr[i][j]);
            if (arr[i][j] != 0)
                size++;
        }
        printf("\n");
    }
    int M[3][size];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (arr[i][j] != 0)
            {
                M[0][k] = i;
                M[1][k] = j;
                M[2][k] = arr[i][j];
                k++;
            }

    printf("Triplet representation of the matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < size; j++)
            printf(" %d ", M[i][j]);

        printf("\n");
    }
    return 0;
}