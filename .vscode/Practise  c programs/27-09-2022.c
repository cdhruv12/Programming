#include <stdio.h>
#define Max 20

void read(int b[Max][3])
{
    int i, j, t, r, c;
    printf("Enter the number of rows and columns:");
    scanf("%d%d", &r, &c);
    printf("\nEnter number of non zero elements:");
    scanf("%d", &t);
    b[0][0] = r;
    b[0][1] = c;
    b[0][2] = t;
    for (i = 1; i <= Max; i++)
    {
        printf("Enter rows columns and value:");
        scanf("%d %d %d", &b[i][0], &b[i][1], &b[i][2]);
    }
}
void add(int b1[Max][3], int b2[Max][3], int b3[Max][3])
{
    int i = 0, j = 0, k = 0;
    int t1, t2;
    t1 = b1[0][2];
    t2 = b2[0][2];
    while (i <= t1 && j <= t2)
    {
        if (b1[i][0] < b2[j][0])
        {
            b3[k][0] = b1[i][0];
            b3[k][1] = b1[i][1];
            b3[k][2] = b1[i][2];
            i++;
            k++;
        }
        else if (b1[i][0] > b2[j][0])
        {
            b3[k][0] = b2[i][0];
            b3[k][1] = b2[i][1];
            b3[k][2] = b2[i][2];
            j++;
            k++;
        }
        else if (b1[i][1] < b2[j][1])
        {
            b3[k][0] = b1[i][0];
            b3[k][1] = b1[i][1];
            b3[k][2] = b1[i][2];
            i++;
            k++;
        }
        else if (b1[i][1] > b2[j][1])
        {
            b3[k][0] = b2[i][0];
            b3[k][1] = b2[i][1];
            b3[k][2] = b2[i][2];
            j++;
            k++;
        }
        else
        {
            b3[k][0] = b1[k][0];
            b3[k][1] = b1[k][1];
            b3[k][2] = b1[k][2] + b2[k][2];
            i++;
            j++;
            k++;
        }
    }
}
void main()
{
    int b1[Max][3], b2[Max][3], b3[Max][3];
    read(b1);
    read(b2);
    add(b1, b2, b3);
}