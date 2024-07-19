#include <stdio.h>
int main()
{
    int r, c;
    int arr[r][c];
    printf("Enter no. of rows and columns of the array:\n");
    scanf("%d %d", &r, &c);
    printf("Enter elements of the array:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter element[%d][%d]:", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    printf("Reverse of an array is:\n");
    for (int i = r; i > 0; i--)
    {
        for (int j = c; j > 0; j--)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}