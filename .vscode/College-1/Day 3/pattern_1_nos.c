#include <stdio.h>

int main()
{
    int n, o, t, h, s;

    printf("Enter 4 digit no.\n");
    scanf("%d", &n);

    o = n % 10;
    t = (n / 10) % 10;
    h = (n / 100) % 10;
    s = (n / 1000) % 10;

    printf("The newly arranged no.=%d%d%d%d", h, s, o, t);

    return 0;
}