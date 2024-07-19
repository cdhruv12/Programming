#include <stdio.h>

int main()
{
    int arr[] = {1, -2, 5, -7, 4, 2, 6};

    // int arr[7];
    // printf("Enter 7 element array : ");
    // scanf("%d", &arr[7]);

    int count_pos = 0;
    int count_neg = 0;

    for (int i = 0; i < 7; i++)
    {
        if (arr[i] < 0)
        {
            count_neg++;
        }
        else
        {
            count_pos++;
        }
    }

    printf("No. of positive elements in the array : %d\n", count_pos);
    printf("No. of negative elements in the array : %d\n", count_neg);

    return 0;
    
}