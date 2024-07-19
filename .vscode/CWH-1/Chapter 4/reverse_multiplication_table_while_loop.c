#include<stdio.h>

int main()
{
    int i=11,n;

    printf("Enter integer=");
    scanf("%d", &n);

    while (i>1)
    {
        i--;
        printf("\n %d X %d = %d \n", n, i, n * i);
    }
    return 0;
}