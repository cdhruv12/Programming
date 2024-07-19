#include <stdio.h>

int main()
{
    int a;
    float b;
    char s[10];
    printf("Enter no.:\n");
    scanf("%d", &a);
    printf("Enter decimal no.:\n");
    scanf("%f", &b);
    printf("Enter single character:\n");
    scanf("%s", s);
    printf("Number is %d\nDecimal is %.3f\nCharacter is %s\n", a, b, s);
    return 0;
}