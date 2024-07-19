#include <stdio.h>

int main()
{
    int p, r, t;

    printf("enter amount=");
    scanf("%d", &p);

    printf("\nenter rate=");
    scanf("%d", &r);

    printf("\nenter time interval=");
    scanf("%d", &t);

    printf("\nsi=%d", p * r * t / 100);

    return 0;
}