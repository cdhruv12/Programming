#include <stdio.h>

int main()
{
    char str[] = "Dhruv", *ptr = str;
    while (*ptr != '\0')
    {
        printf("%c\n", *ptr);
        ptr++;
    }

    return 0;
}