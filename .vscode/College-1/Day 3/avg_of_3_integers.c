#include <stdio.h>

int main()
{
    float a, b, c;

    printf("Enter 1st no.\n");
    scanf("%f", &a);

    printf("Enter 2nd no.\n");
    scanf("%f", &b);

    printf("Enter 3rd no.\n");
    scanf("%f", &c);

    printf("Avg. of 3 no.s \n%f", (a + b + c) / 3);

    return 0;
}