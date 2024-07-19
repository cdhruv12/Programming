#include <stdio.h>

int main()
{
    char str[100], rev[100], arr[100];
    int i, j, c = 0;
    scanf("%s", str);
    printf("\nString Before Reverse: %s", str);
    while (str[c] != '\0')
    {
        c++;
    }
    j = c - 1;
    for (i = 0; i < c; i++)
    {
        rev[i] = str[j];
        j--;
    }
    printf("\nString after reverse: %s", rev);
    for (i = 0; i < c; i++)
    {
        arr[i] = rev[i];
    }
    printf("\nString after reverse stored in another array: %s", arr);

    return 0;
}