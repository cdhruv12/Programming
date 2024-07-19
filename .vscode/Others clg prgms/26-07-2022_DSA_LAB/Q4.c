#include <stdio.h>

void displayMinDistance(int *arr, int n, int a, int b)
{
    int minDis = n;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == a)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (b == arr[j])
                {
                    minDis = (j - i) < minDis ? (j - i) : minDis;
                    break;
                }
            }
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == b)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a == arr[j])
                {
                    minDis = (j - i) < minDis ? (j - i) : minDis;
                    break;
                }
            }
        }
    }

    printf("Minimum Distance: %d", minDis);
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter two numbers: ");
    int a, b;
    scanf("%d%d", &a, &b);
    displayMinDistance(arr, n, a, b);
}