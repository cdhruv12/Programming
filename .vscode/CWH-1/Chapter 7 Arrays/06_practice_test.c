#include <stdio.h>

void printTable(int *mulTable, int num, int n)
{
    printf("\nThe multiplication table of %d is as follows : \n", num);

    for (int i = 0; i < n; i++)
    {
        mulTable[i] = num * (i + 1);
    }

    for (int i = 0; i < n; i++)
    {
        printf(" %d X %d = %d \n", num, i + 1, mulTable[i]);
    }

    printf("\n***********************************************************\n"); 

}

int main()
{
    int num, n, m;

    printf("Enter how many table's you need : ");
    scanf("%d", &m);

    printf("\nEnter the no. for which you need a table : ");
    scanf("%d", &num);

    printf("\nEnter the no. till which you need a table : ");
    scanf("%d", &n);

    int mulTable[m][n];

    printTable(mulTable[m], num, n);

    return 0;
    
}