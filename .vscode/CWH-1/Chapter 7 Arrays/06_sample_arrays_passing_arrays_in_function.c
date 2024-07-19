#include <stdio.h>

/*void printArray(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Value of element %d is %d\n", i + 1, *(ptr + i));
    }
}*/

/*void printArray(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Value of element %d is %d\n", i + 1, ptr[i]);
    }
}*/

/*void printArray(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Value of element %d is %d\n", i + 1, *(ptr + i));
    }
}*/

void printArray(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Value of element %d is %d\n", i + 1, ptr[i]);

        ptr[2] = 353; // This value will change in array arr of main as well
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    printArray(arr, 7);
    printArray(arr, 7);

    printf("%d", arr[2]);

    return 0;

}