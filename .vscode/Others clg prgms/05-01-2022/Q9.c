#include <stdio.h>

int main()
{
    char str[10], leftHalf[10], rightHalf[10];
    int l, mid, i, k, j, j1;
    scanf("%[^\n]s", str);
    printf("%s", str);
    for (l = 0; str[l] != '\0'; ++l)
        ;
    mid = l / 2;
    for (i = 0; i < mid; i++)
    {
        leftHalf[i] = str[i];
    }
    leftHalf[i] = '\0';
    for (i = mid, k = 0; i <= l; i++, k++)
    {
        rightHalf[k] = str[i];
    }
    rightHalf[i] = '\0';
    int c = 0, c1 = 0;
    char rev1[100];
    while (leftHalf[c1] != '\0')
    {
        c1++;
    }
    j1 = c1 - 1;
    for (i = 0; i < c1; i++)
    {
        rev1[i] = leftHalf[j1];
        j1--;
    }
    printf("\n%s%s", rightHalf, rev1);

    return 0;
}