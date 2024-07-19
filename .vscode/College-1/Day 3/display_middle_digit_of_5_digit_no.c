#include <stdio.h>

int main()
{
    int n, m, t;

    printf("Enter a 5 digit no.\n");
    scanf("%d", &n);

    m = (n / 100) % 10;
    t = (n / 10) % 1000;

    printf("The middle digit %d\nThe middle 3 digits %d ", m, t);

    return 0;
}