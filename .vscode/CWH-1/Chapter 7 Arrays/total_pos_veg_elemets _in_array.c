#include <stdio.h>
int pcount(int *arr, int n)
{
    int p = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            p++;
        }
    }
    return p;
}
int ncount(int *arr, int n)
{
    int v = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            v++;
        }
    }
    return v;
}

int main()
{
    int n;
    printf("Enter total no.s of elemnt in array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d no.s for the array\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Total +ve elements in array are %d\n", pcount(arr, n));
    printf("Total -ve elements in array are %d\n", ncount(arr, n));
    return 0;
}