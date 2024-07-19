#include <stdio.h>

int sum(int a, int b);

int main()
{
    int a, b, c;

    printf("Enter 1st no. : \n");
    scanf("%d", &a);
    printf("Enter 2nd no. : \n");
    scanf("%d", &b);

    c = sum(a, b);

    printf("The va;ue of c is %d \n", c);

    return 0;
}

int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}