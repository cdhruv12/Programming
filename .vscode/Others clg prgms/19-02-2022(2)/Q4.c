#include <stdio.h>
void rev(int s, int str[])
{
    int arr5[s];
    int i, temp = 0;
    for (i = (s - 1); i >= 0; i--)
    {
        arr5[temp++] = str[i];
    }
    printf(" the reverese array is \n");
    for (i = 0; i < s; i++)
    {
        printf(" %d ", arr5[i]);
    }
}
int main()
{
    int s, i;
    printf(" enter the size of array : \n");
    scanf("%d", &s);
    int arr[s], arr1[s];
    printf(" enetr the elemensts of array: \n");
    for (i = 0; i < s; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < s; i++)
    {
        arr1[i] = arr[i];
    }
    printf(" the original array is : \n");
    for (i = 0; i < s; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    rev(s, arr);
    return 0;
}