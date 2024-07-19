#include <stdio.h>

int main()
{
    int num;

    printf("enter no.\n");
    scanf("%d", &num);

    if (num % 97 == 0)
    {
        printf("no. is divisible");
    }

    else
    {
        printf("no. is not divisible");
    }

    return 0;
}