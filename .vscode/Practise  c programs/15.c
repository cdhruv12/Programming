#include <stdio.h>

int main()
{
    int arr[3] = {12, 23, 34};
    for (int i = 2; i > -1; i--)
    {
        printf("Value of [%d] array is %d\n", i, arr[i]);
    }

    return 0;
}