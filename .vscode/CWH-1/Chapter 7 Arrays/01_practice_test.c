#include <stdio.h>

int main()
{
    int arr[10];

    int *ptr = arr; // you can also write int*ptr=arr[0];
    ptr = ptr + 2;

    if (ptr == &arr[2])
    {
        printf("These points to the same location in the memory\n");
    }

    else
    {
        printf("These does not points to the same location in the memory\n");
    }

    return 0;
    
}