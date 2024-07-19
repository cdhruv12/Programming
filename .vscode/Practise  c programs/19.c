#include <stdio.h>

int main()
{
    int n, a, pos, arr[n]; // n=size , a=no. to be added
    printf("Enter no. of elements needed in the array : \n");
    scanf("%d", &n);
    printf("Enter elements of the array :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", &arr[i]);
    }
    printf("Enter the postion where you want to add the no.:\n");
    scanf("%d", &pos);
    printf("Enter no. to be added in the array:\n");
    scanf("%d", &a);
    for (int i = n - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = a;
    printf("Final array after inserting the value is as  follows:\n");
    for (int i = 0; i <= n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}