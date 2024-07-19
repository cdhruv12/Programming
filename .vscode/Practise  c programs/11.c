#include <stdio.h>

int main()
{
    float a;
    printf("Enter no.\n");
    scanf("%f", &a);
    int b = a;
    float c = a - b;
    printf("Integer part is : %d\n", b);
    printf("Decimal part is : %.3f\n", c);
    return 0;
}