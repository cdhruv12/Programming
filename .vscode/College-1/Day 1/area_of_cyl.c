#include <stdio.h>

int main()
{
    int r, h;
    float pi = 3.14;

    printf("enter radius=");
    scanf("%d", &r);

    printf("\nenter height=");
    scanf("%d", &h); 

    printf("\narea of cyl=%.2f", pi * r * r * h);

    return 0;
}