#include <stdio.h>

int main()
{
    int n, o, t, h, s;

    printf("Enter the 4-digit no.\n");
    scanf("%d", &n);

    o = n % 10;
    t = (n / 10) % 10;
    h = (n / 100) % 10;
    s = (n / 1000) % 10;

    printf("The rearrange no. is %d%d%d%d", o, t, h, s);

    return 0;
}