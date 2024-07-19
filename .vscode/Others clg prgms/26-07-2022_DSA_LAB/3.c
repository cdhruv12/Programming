#include <stdio.h>
void Display(int arr[], int no)
{
    int i;
    printf("The array is\n");
    for (i = 0; i < no; i++)
    {
        printf("%d  ", arr[i]);
    }
}
void Insertion(int arr[], int no)
{
    int z, i, j, k;
    no = no + 1;
    printf("enter the index at which we want to insert an element");
    scanf("%d", &z);
    for (j = no; j >= z; j--)
    {
        arr[j + 1] = arr[j];
    }
    printf("enter the element which we want to enter:");
    scanf("%d", &k);
    arr[z] = k;
    for (i = 0; i < no; i++)
    {
        printf("%d ", arr[i]);
    }
}
void Deletion(int arr[], int no)
{
    int i, j, k, z;
    printf("enter the element which you want to delete:");
    scanf("%d", &z);
    for (i = 0; i < no; i++)
    {
        if (arr[i] == z)
        {
            k = i + 1;
        }
    }
    // j=z;
    for (j = k; j < no; j++)
    {
        arr[j - 1] = arr[j];
    }
    no = no - 1;
    printf("Array after deleting an element:\n");
    for (i = 0; i < no; i++)
    {
        printf("%d  ", arr[i]);
    }
}

int main()
{
    int i, n, j, choice;
    printf("Enter the value of n:");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter array element:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nArray is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\nEnter Your choice(display/insertion/deletion\n:");
    scanf("%d", &choice);
    if (choice == 1)
    {
        Display(a, n);
    }
    if (choice == 2)
    {
        Insertion(a, n);
    }
    if (choice == 3)
    {
        Deletion(a, n);
    }

    return 0;
}