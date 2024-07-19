#include <stdio.h>
int main()
{
    int first[10][10], second[10][10], sum[10][10], sub[10][10], mul[10][10], r, c;
    printf("Enter total no. of rows and columns\n");
    scanf("%d %d", &r, &c);
    printf("Enter the elements of first matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d ", &first[i][j]);
        }
    }
    printf("Enter element of second matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d ", &second[i][j]);
        }
    }
    printf("Sum of the 2 arrays is \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum[i][j] = first[i][j] + second[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    printf("Subration of 2 arrays is\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sub[i][j] = first[i][j] - second[i][j];
            printf("%d\t", sub[i][j]);
        }
        printf("\n");
    }
    printf("Multiplication of 2 arrays is \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            mul[i][j] = first[i][j] * second[i][j];
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}