#include <stdio.h>

int main()
{
    int n, p, q, r, s, t, u;

    printf("Enter the no.\n");
    scanf("%d", &n);

    p = n / 1000;
    q = n % 1000;
    r = q / 100;
    s = q % 100;
    t = s / 10;
    u = s % 10;

    printf("The 1st digit\n%d\nThe 2nd digit\n%d\nThe 3rd digit\n%d\nThe 4th digit\n%d\nAnd the sum of all the digits\n%d\n", p, r, t, u, p + r + t + u);

    return 0;
}