#include <stdio.h>

int main()
{
    int n, arr[n], temp = 0;
    printf("Enter length of array:\n");
    scanf("%d", &n);
    printf("Enter the elements of the arrays:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d\n", &arr[i]);
    }
    printf("The elements of the arrays are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\n");
    printf("Array in ascending order is as follows:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d,", arr[i]);
    }

    return 0;
}